1class Solution {
2public:
3    int maxProfit(vector<int>& prices, int fee) {
4        int n=prices.size();
5        int aheadbuy=0,aheadnbuy=0,currbuy,currnbuy;
6        for(int idx=n-1;idx>=0;idx--){
7            currnbuy=max(prices[idx]+aheadbuy,0+aheadnbuy);
8            currbuy=max(-prices[idx]-fee+aheadnbuy,0+aheadbuy);
9            aheadbuy=currbuy;
10            aheadnbuy=currnbuy;
11        }
12        return aheadbuy;
13    }
14};