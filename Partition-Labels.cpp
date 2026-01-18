1class Solution {
2public:
3    vector<int> partitionLabels(string s) {
4        vector<int> last(26,0);
5        int n=s.size();
6        for(int i=0;i<n;i++){
7            last[s[i]-'a']=i;
8        }
9        vector<int> result;
10        int start=0,end=0;
11        for(int i=0;i<n;i++){
12            end=max(end,last[s[i]-'a']);
13            if(i==end){
14                result.push_back(end-start+1);
15                start=i+1;
16            }
17        }
18        return result;
19    }
20};