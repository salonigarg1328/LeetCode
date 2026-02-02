class Solution {
public:
    static const long long MOD = 1000000007;
    long long power(long long base,long long exp){
            long long ans=1;
            base %= MOD;
             while(exp > 0){
                if(exp & 1){
                    ans = (ans*base)%MOD;
                }
                base = (base * base) % MOD;
                exp >>= 1;
             }
             return ans;
    }

    int countGoodNumbers(long long n) {
        long long  even=(n+1)/2;
        long long odd=n/2;

        long long part1=power(5,even);
        long long part2=power(4,odd);
        return (part1*part2) % MOD;
    }
};