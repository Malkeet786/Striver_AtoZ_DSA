public:
    bool isSymmetricTest(TreeNode *p,TreeNode *q)
    {
        if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL)return false;
        if(p->val!=q->val)return false;
        else
            return isSymmetricTest(p->left,q->right) && isSymmetricTest(p->right,q->left);
          
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        return isSymmetricTest(root->left,root->right);
    }
};