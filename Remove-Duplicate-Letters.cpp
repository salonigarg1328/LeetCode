1class Solution {
2public:
3    string removeDuplicateLetters(string s) {
4        vector<int> freq(26,0);
5        vector<bool> used(26,false);
6        stack<char> st;
7        for(char c:s){
8            freq[c-'a']++;
9        }
10        for(char c:s){
11            freq[c-'a']--;
12            if(used[c-'a']) continue;
13            while(!st.empty() && st.top() > c && freq[st.top()-'a']>0){
14                used[st.top()-'a']=false;
15                st.pop();
16            }
17            st.push(c);
18            used[c-'a']=true;
19        }
20        string ans="";
21        while(!st.empty()){
22            ans += st.top();
23            st.pop();
24        }
25        reverse(ans.begin(),ans.end());
26        return ans;
27    }
28};