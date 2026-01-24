class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> freq;
        for(char c:s){
          freq[c]++;
        }
        string result="";
        for(char c:order){
            while(freq[c] > 0){
                result.push_back(c);
                freq[c]--;
            }
        }
        for(auto &p:freq){
            while(p.second > 0){
                result.push_back(p.first);
                p.second--;
            }
        }
        return result;
    }
};