class Solution {
public:
    long long wonderfulSubstrings(string word) {
        unordered_map<int,long long> freq;
        freq[0]=1;
        int mask=0;
        long long ans=0;
        for(char ch:word){
            int bit=ch-'a';
            mask ^= (1<<bit);
            ans += freq[mask];
            for(int i=0;i<10;i++){
                ans += freq[mask ^ (1<<i)];
            }
            freq[mask]++;
        }
        return ans;
    }
};