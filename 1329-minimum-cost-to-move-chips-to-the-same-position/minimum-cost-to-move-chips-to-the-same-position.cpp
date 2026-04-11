class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int oddcount=0,evencount=0;
        for(int p:position){
            if(p%2==0) evencount++;
            else oddcount++;
        }
        return min(oddcount,evencount);
    }
};