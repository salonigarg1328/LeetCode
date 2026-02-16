class Solution {
public:
    int findIntegers(int n) {
     vector<int> dp(32);
     dp[0]=1;
     dp[1]=2;
     for(int i=2;i<32;i++){
        dp[i]=dp[i-1] + dp[i-2];
     }   
     int ans=0;
     int prevbit=0;
     for(int i=30;i>=0;i--){
        if(n &(1<<i)){
            ans += dp[i];
            if(prevbit==1)
              return ans;
            prevbit=1;
        }else{
            prevbit=0;
        }
     }
     return ans+1;
    }
};