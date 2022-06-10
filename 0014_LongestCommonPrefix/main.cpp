/*
14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]

Output: ""
Explanation: There is no common prefix among the input strings.

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lower-case English letters.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string_view>
using namespace std;

class Solution {
public:
    string suffix;
    string longestCommonPrefix(vector<string>& strs) {
        return strs[maxElementIndex];
    }
};

int main()
{
    Solution sl;
    vector<string> strs = {"flower", "flow", "flight", "flowthflight"};
    cout << sl.longestCommonPrefix(strs) << '\n';
    return 0;
}
