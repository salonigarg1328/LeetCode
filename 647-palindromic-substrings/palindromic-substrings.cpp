class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int cnt=0;
        for(int i=0;i<n;i++){
            expand(s,i,i,cnt);
            expand(s,i,i+1,cnt);
        }
        return cnt;
    }
    void expand(string &s,int l, int r,int &cnt){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            cnt++;
            l--;
            r++;
        }
    }

};