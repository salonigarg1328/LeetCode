1class Solution {
2public:
3    int maxChunksToSorted(vector<int>& arr) {
4        int maxchunk=0,chunk=0;
5        for(int i=0;i<arr.size();i++){
6            maxchunk=max(maxchunk,arr[i]);
7            if(maxchunk==i){
8                chunk++;
9            }
10        }
11        return chunk;
12    }
13};