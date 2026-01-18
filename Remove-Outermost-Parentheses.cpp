1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string ans="";
5        int depth=0;
6        for(char c:s){
7            if(c=='('){
8                if(depth > 0) ans +=c;
9                depth++;
10            }else{
11                depth--;
12                if(depth > 0) ans+=c;
13            }
14        }
15        return ans;
16    }
17};