1class Solution {
2    public:
3        vector<string> summaryRanges(vector<int>& nums) {
4                vector<string> result;
5                        int n = nums.size();
6                                
7                                        for (int i = 0; i < n; i++) {
8                                                    int start = nums[i];
9                                                                
10                                                                            // Move i while numbers are consecutive
11                                                                                        while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
12                                                                                                        i++;
13                                                                                                                    }
14                                                                                                                                
15                                                                                                                                            int end = nums[i];
16                                                                                                                                                        
17                                                                                                                                                                    if (start == end) {
18                                                                                                                                                                                    result.push_back(to_string(start));
19                                                                                                                                                                                                } else {
20                                                                                                                                                                                                                result.push_back(to_string(start) + "->" + to_string(end));
21                                                                                                                                                                                                                            }
22                                                                                                                                                                                                                                    }
23                                                                                                                                                                                                                                            
24                                                                                                                                                                                                                                                    return result;
25                                                                                                                                                                                                                                                        }
26                                                                                                                                                                                                                                                        };
27                                                                                                                                                                                                                                                        
28