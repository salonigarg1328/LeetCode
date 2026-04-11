1class Solution {
2public:
3    int longestValidParentheses(string s) {
4     stack<int> st;
5     st.push(-1);
6     int maxlen=0; 
7     for(int i=0;i<s.size();i++){
8        if(s[i]=='(') st.push(i);
9        else{
10            st.pop();
11            if(st.empty()){
12                st.push(i);
13            }else{
14                maxlen=max(maxlen,i-st.top());
15            }
16        }
17     }  
18     return maxlen;
19    }
20};