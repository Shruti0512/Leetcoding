/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> f(TreeNode* root,int& result, int distance){
        if(root==NULL){
            return {};
        }
        if(!root->left && !root->right){
            return {1};
        }

        vector<int> left=f(root->left,result,distance);
        vector<int> right=f(root->right,result,distance);

        for(int l:left){
            for(int r:right){
                if(l+r<=distance){
                    result++;
                }
            }
        }
        vector<int> currdist;
        for(int l:left){
            if(l+1<distance){
                currdist.push_back(l+1);
            }
        }

        for(int r:right){
            if(r+1<distance){
                currdist.push_back(r+1);
            }
        }
        return currdist;
    }
    int countPairs(TreeNode* root, int distance) {
        int result=0;
        f(root,result,distance);
        return result;
    }
};