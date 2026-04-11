1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
15        vector<vector<int>> ans;
16        if(!root) return ans;
17        queue<TreeNode*> q;
18        q.push(root);
19        bool lefttoright=true;
20        while(!q.empty()){
21            int size=q.size();
22            vector<int> level(size);
23            for(int i=0;i<size;i++){
24                TreeNode* node=q.front();
25                q.pop();
26                int idx=lefttoright ? i : (size-1-i);
27                level[idx]=node->val;
28                if(node->left) q.push(node->left);
29                if(node->right) q.push(node->right); 
30            }
31            ans.push_back(level);
32            lefttoright=!lefttoright;
33        }
34        return ans;
35    }
36};