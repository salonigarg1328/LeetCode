class Solution {
public:
    int convert(string s){
        int num=0;
        for(char c:s ){
            num=num*10 +(c-'a');
        }
        return num;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return convert(firstWord) + convert(secondWord) == convert(targetWord);
    }
};