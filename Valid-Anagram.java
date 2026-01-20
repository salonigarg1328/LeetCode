1class Solution {
2    public boolean isAnagram(String s, String t) {
3        if(s.length()!=t.length()) return false;
4         int[] count = new int[26];
5         for(char c:s.toCharArray()){
6             count[c-'a']++;
7         }
8         for(char c:t.toCharArray()){
9             count[c-'a']--;
10         }
11        for(int freq:count){
12            if(freq!=0) return false;
13        }
14        return true;
15    }
16
17    }
18