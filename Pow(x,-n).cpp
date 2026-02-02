1class Solution {
2public:
3    double myPow(double x, int n) {
4        long long N=n;
5        if(N<0){
6            x=1/x;
7            N=-N;
8        }
9        return fastpower(x,N);
10    }
11    double fastpower(double x,long long n){
12     if(n==0){
13        return 1.0;
14     }
15     double half=fastpower(x,n/2);
16     if(n%2==0){
17        return half*half;
18     }else{
19        return half*half*x;
20     }
21    }
22};