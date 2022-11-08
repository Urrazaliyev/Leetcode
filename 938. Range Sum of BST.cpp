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
    int sum=0, low, high;
    void runTree(TreeNode* node){
        if(node->val>=low && node->val<=high)
            sum+=node->val;
        if(node->left!=nullptr){
            runTree(node->left);
        }
        if(node->right!=nullptr)
            runTree(node->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        this->low=low;
        this->high=high;
        runTree(root);
        return sum;
    }
};
