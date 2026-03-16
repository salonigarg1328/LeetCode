class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size(),m=t.size();
        int minlen=INT_MAX;
        int startindex=-1;
        int cnt=0,l=0,r=0;
        unordered_map<char,int> mpp;
        for(int i=0;i<m;i++){
            mpp[t[i]]++;
        }
        while(r < n){
            if(mpp[s[r]]>0) cnt=cnt+1;
            mpp[s[r]]--;
            while(cnt == m){
                if(r-l+1 < minlen){
                    minlen=r-l+1;
                    startindex=l;
                }
               
                mpp[s[l]]++;
                if(mpp[s[l]] > 0) cnt = cnt-1;
                l++;

            }
            r=r+1;
        }
        return startindex==-1? "" : s.substr(startindex,minlen);
    }
};