/*
13. Roman to Integer
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII,
which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However,
the numeral for four is not IIII. Instead, the number four is written as IV.
Because the one is before the five we subtract it making four. The same principle applies to the number nine,
which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9.
X can be placed before L (50) and C (100) to make 40 and 90.
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

Example 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

Constraints:

1 <= s.length <= 15
s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
It is guaranteed that s is a valid roman numeral in the range [1, 3999]
*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <iterator>
using namespace std;

class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> T = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100},
                {'D', 500}, {'M', 1000}
            };
            int num=T[s.back()];
            for(unsigned i=0; i<s.length()-1; i++)
                num += T[s[i]] < T[s[i+1]] ? -T[s[i]] : T[s[i]];
            return num;
        }
};

//class Solution {
//public:
//    map<string, int> combinations = {{"I", 1}, {"II", 2}, {"III", 3}, {"IV", 4}, {"V", 5},
//                                     {"VI", 6}, {"VII", 7}, {"VIII", 8}, {"IX", 9}, {"X", 10},
//                                     {"L", 50}, {"D", 100}, {"M", 1000}};

//    int romanToInt(string s) {
//        int res = 0;
//        map<string, int>::iterator it = combinations.begin();

//        string key;
//        auto item = combinations.find(key);

//        key = s[2];
//        cout << item->first << '\n';

////        for (const auto& i : s){
////            key = i;
////            for(auto j = combinations.begin(); j != combinations.end(); ++j){
////                if (j != combinations.end()) {
////                    cout << j->first << "\n";
////                } else {
////                    cout << "Key does not exist!" << endl;
////                }
////            }
////        }

//        return res;
//    }
//};

int main()
{
    Solution sl;
    cout << sl.romanToInt("MCMXCIV");

    return 0;
}
