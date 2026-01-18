1class Solution {
2public:
3    vector<string> result;
4    void backtrack(string curr,int open,int close,int n){
5        if(curr.length() == 2*n){
6            result.push_back(curr);
7            return;
8        }
9        if(open < n){
10            backtrack(curr + "(",open+1,close,n);
11        }
12        if(close< open){
13            backtrack(curr+")",open,close+1,n);
14        }
15    }
16    vector<string> generateParenthesis(int n) {
17        backtrack("",0,0,n);
18        return result;
19
20    }
21};