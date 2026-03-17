class Solution {
public:
    void solve(int start,vector<int> &candidates,int target,vector<int> &curr,vector<vector<int>> &ans){
        if(target==0){
            ans.push_back(curr);
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(candidates[i] > target) break;
            curr.push_back(candidates[i]);
            solve(i,candidates,target-candidates[i],curr,ans);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(),candidates.end());
        solve(0,candidates,target,curr,ans);
        return ans;
    }
};