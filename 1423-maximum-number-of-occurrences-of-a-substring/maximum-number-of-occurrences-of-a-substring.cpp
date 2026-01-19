class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        vector<int> freq(26,0);
        unordered_map<string,int> mp;
        int distinct=0;
        int i=0;
        int ans=0;
        for(int j=0;j<s.size();j++){
            if(freq[s[j]-'a']==0){
                distinct++;
            }
            freq[s[j]-'a']++;
            if(j-i+1 > minSize){
                freq[s[i]-'a']--;
                if(freq[s[i]-'a']==0)
                   distinct--;

                i++;
            }
            if(j-i+1 ==minSize && distinct <= maxLetters){
                string sub=s.substr(i,minSize);
                ans=max(ans,++mp[sub]);
            }
        }
        return ans;
    }
};