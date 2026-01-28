class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        int ans=0;
        for(auto &it: freq){
            int x=it.first;
            if(freq.count(x+1)){
                ans=max(ans,freq[x] + freq[x+1]);
            }

        }
        return ans;
    }
};