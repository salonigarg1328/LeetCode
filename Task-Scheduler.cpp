1class Solution {
2public:
3    int leastInterval(vector<char>& tasks, int n) {
4        vector<int> freq(26,0);
5        for(char c:tasks) freq[c-'A']++;
6        int maxfreq= *max_element(freq.begin(),freq.end());
7        int countmax=0;
8        for(int f:freq){
9            if(f==maxfreq) countmax++;
10        }
11        int partcount=maxfreq-1;
12        int partlength=n+1;
13        int minlength=partcount * partlength + countmax;
14        return max((int)tasks.size(),minlength);
15    }
16};