class Solution {
public:
    void backtrack(int start,int k,int n,vector<int> &temp,vector<vector<int>> &result){
        if(k==0 && n==0){
            result.push_back(temp);
            return;
        }
        if(k<0 || n<0) return;
        for(int i=start; i<=9 ; i++){
            temp.push_back(i);
            backtrack(i+1,k-1,n-i,temp,result);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> temp;
        backtrack(1,k,n,temp,result);
        return result;
    }
};