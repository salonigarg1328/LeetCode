1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4     vector<int> v(128,-1);
5        int maxlength=0;
6        int start=0;
7        for(int i=0;i<s.size();i++){
8            char ch=s[i];
9            if(v[ch]>=start){
10                start=v[ch]+1;
11            }
12            v[ch]=i;
13            maxlength=max(maxlength,i-start+1);
14        }
15    return maxlength;    
16    }
17};