1class Solution {
2public:
3    bool repeatedSubstringPattern(string s) {
4     int n=s.length();
5     for(int l=n/2;l>=1;l--){
6        if(n%l == 0){
7            int times=n/l;
8            string pattern=s.substr(0,l);
9            string newstr="";
10            while(times--){
11                newstr += pattern;
12            }
13            if(newstr==s)
14                return true;
15        }
16     }   
17     return false;
18    }
19};