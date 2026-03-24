class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxchunk=0,chunk=0;
        for(int i=0;i<arr.size();i++){
            maxchunk=max(maxchunk,arr[i]);
            if(maxchunk==i){
                chunk++;
            }
        }
        return chunk;
    }
};