class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int prevdevicecnt=0;
        int result=0;
        for(int i=0;i<n;i++){
            int currdevicecnt=0;
            for(char &ch:bank[i]){
                if(ch== '1')
                   currdevicecnt++;
            }
            result += (currdevicecnt * prevdevicecnt);
            if(currdevicecnt != 0){
                prevdevicecnt = currdevicecnt;
            }
        }
        return result;
    }
};