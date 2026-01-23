class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(char c:s){
            freq[c]++;
        }
        int len=0;
        bool oddfound=false;
        for(auto &p:freq){
            if(p.second % 2 == 0){
                len += p.second;
            }else{
                len += p.second -1;
                oddfound = true;
            }
        }
        if(oddfound) len++;
        return len;
    }
};