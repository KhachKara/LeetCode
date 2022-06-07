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