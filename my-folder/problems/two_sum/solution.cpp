#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else {
        // If the element is not
        // present in the vector
        return -1;
    }
}

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			vector<int> out;
			unordered_multimap<int, int> m;

			for(size_t i = 0; i < nums.size(); ++i) {
				m.insert({nums.at(i), i});
			}

			unordered_multimap<int, int>::iterator ummIt = m.begin();

			for(; ummIt != m.end(); ++ummIt) {
				if(m.count(target - ummIt->first)>0) {
					int searchedIndex = getIndex(nums, target - ummIt->first);
					if(searchedIndex == ummIt->second) {
						continue;
					} else {
						out.push_back(getIndex(nums, target - ummIt->first));
						out.push_back(ummIt->second);
						return out;
					}
				}
			}
			return {};
		}
};


