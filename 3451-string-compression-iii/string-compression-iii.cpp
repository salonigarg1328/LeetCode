class Solution {
public:
    string compressedString(string word) {
        int n=word.length();
        string comp="";
        int i=0;
        while(i<n){
            int cnt=0;
            char ch=word[i];
            while(word[i]==ch && cnt<9 && i<n){
                cnt++;
                i++;
            }
            comp += to_string(cnt)+ch;
        }
        return comp;
    }
};