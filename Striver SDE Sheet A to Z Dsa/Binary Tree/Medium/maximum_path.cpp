class Solution {
public:
    int max_sum=INT_MIN;
    int maxgain(TreeNode* root){
        if(!root)return 0;
        int l=max(maxgain(root->left),0);
        int r=max(maxgain(root->right),0);
        int price=root->val+l+r;
        max_sum=max(max_sum,price);
        return root->val+max(l,r);
    }
    
    int maxPathSum(TreeNode* root) {
        maxgain(root);
        return max_sum;
    }
};