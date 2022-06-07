/*
9. Palindrome Number
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.


Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


Constraints:

-231 <= x <= 231 - 1
*/

#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(const int& x) {
        string str = to_string(x);
        string firstHalf, secondHalf;

        if(str.size() % 2 > 0){
            firstHalf = str.substr(0, str.size() / 2);
            secondHalf = str.substr(str.size() / 2 + 1, str.size());
        } else {
            firstHalf = str.substr(0, str.size() / 2);
            secondHalf = str.substr(str.size() / 2, str.size());
        }
        reverse(secondHalf.begin(),secondHalf.end());
        if(firstHalf == secondHalf){
            return true;
        }
        return false;
    }
};

int main() {
    Solution sl;
    int x;
    cin >> x;
    cout << sl.isPalindrome(x) << '\n';
    return 0;
}
