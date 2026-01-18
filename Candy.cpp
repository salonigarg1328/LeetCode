1class Solution {
2public:
3    int candy(vector<int>& ratings) {
4        int n=ratings.size();
5        vector<int> candies(n,1);
6        for(int i=1;i<n;i++){
7            if(ratings[i]>ratings[i-1]){
8               candies[i]=candies[i-1]+1;
9            }
10        }
11        for(int i=n-2;i>=0;i--){
12            if(ratings[i]>ratings[i+1]){
13                candies[i]=max(candies[i],candies[i+1]+1);
14            }
15        }
16        int total=0;
17        for(int c:candies)
18           total += c;
19        return total;
20    }
21};