1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        vector<int> freq(26,0);
5        int left=0;
6        int ans=0;
7        int maxfreq=0;
8        for(int right=0;right<s.size();right++){
9             freq[s[right]-'A']++;
10            maxfreq=max(maxfreq,freq[s[right]-'A']);
11            while((right-left+1)-maxfreq > k){
12                freq[s[left]-'A']--;
13                left++;
14            }
15            ans=max(ans,right-left+1);
16        }
17        return ans;
18    }
19};