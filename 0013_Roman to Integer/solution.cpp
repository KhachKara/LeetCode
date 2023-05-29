class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> T = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100},
                {'D', 500}, {'M', 1000}
            };
            int num=T[s.back()];
            for(int i=0; i<s.length()-1; i++)
                num += T[s[i]] < T[s[i+1]] ? -T[s[i]] : T[s[i]];
            return num;
        }
};