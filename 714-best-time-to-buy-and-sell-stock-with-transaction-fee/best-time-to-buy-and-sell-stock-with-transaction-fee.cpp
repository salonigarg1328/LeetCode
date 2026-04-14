class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        int aheadbuy=0,aheadnbuy=0,currbuy,currnbuy;
        for(int idx=n-1;idx>=0;idx--){
            currnbuy=max(prices[idx]+aheadbuy,0+aheadnbuy);
            currbuy=max(-prices[idx]-fee+aheadnbuy,0+aheadbuy);
            aheadbuy=currbuy;
            aheadnbuy=currnbuy;
        }
        return aheadbuy;
    }
};