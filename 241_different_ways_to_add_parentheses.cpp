class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
         vector<int> result;
         for(int i=0;i<expression.size();i++){
            char c=expression[i];
            if(c=='+' || c=='-' || c=='*'){
                string left=expression.substr(0,i);
                string right=expression.substr(i+1);
                vector<int> leftresult=diffWaysToCompute(left);
                vector<int> rightresult=diffWaysToCompute(right);

                for(int a:leftresult){
                    for(int b:rightresult){
                        if(c=='+') result.push_back(a+b);
                        else if(c=='-') result.push_back(a-b);
                        else result.push_back(a*b);
                    }
                }
            }
         }
         if(result.empty()){
            result.push_back(stoi(expression));
         }
         return result;
    }
};