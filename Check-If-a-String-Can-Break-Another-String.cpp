1class Solution {
2public:
3    bool checkIfCanBreak(string s1, string s2) {
4     sort(s1.begin(),s1.end());
5     sort(s2.begin(),s2.end());
6     bool s1break=true,s2break=true;
7     for(int i=0;i<s1.size();i++){
8        if(s1[i] < s2[i]) s1break= false;
9        if(s2[i]  < s1[i]) s2break= false;
10     }   
11     return s1break || s2break;
12    }
13};