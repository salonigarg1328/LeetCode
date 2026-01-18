1class Solution {
2public:
3    int minSwaps(string s) {
4       int balance=0;
5       int minbalance=0;
6       for(char c:s){
7        if(c=='['){
8            balance++;
9        }else{
10            balance--;
11        }
12        minbalance=min(balance,minbalance);
13       } 
14       return (-minbalance +1)/2;
15    }
16};