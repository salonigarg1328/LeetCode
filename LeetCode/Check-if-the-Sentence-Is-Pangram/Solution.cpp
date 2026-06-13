1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        vector<int> arr(26,0);
5        for(char &ch:sentence){
6            int idx=ch-'a';
7            arr[idx]++;
8        }
9        for(int &cnt:arr){
10            if(cnt==0)
11              return false;
12        }
13        return true;
14    }
15};