1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int left=0,right=s.size()-1;
5        while(left< right){
6            while(left < right && !isalnum(s[left]))  left++;
7            while(left < right && !isalnum(s[right])) right--;
8            if(tolower(s[left]) != tolower(s[right]))
9                  return false;
10
11            left++;
12            right--;
13        }
14        return true;
15    }
16};