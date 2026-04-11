1class Solution {
2public:
3    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
4        int n=scores.size();
5        vector<pair<int,int>> players(n);
6        for(int i=0;i<n;i++){
7            players[i]={ages[i],scores[i]};
8        }
9        sort(players.begin(),players.end());
10        vector<int> dp(n);
11        for(int i=0;i<n;i++){
12            dp[i]=players[i].second;
13            for(int j=0;j<i;j++){
14                if(players[j].second <= players[i].second){
15                    dp[i]=max(dp[i],dp[j]+players[i].second);
16                }
17            }
18        }
19        return *max_element(dp.begin(),dp.end());
20    }
21};