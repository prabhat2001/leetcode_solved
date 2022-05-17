class Solution {
    
    void dfs(TreeNode* copy, TreeNode* target, TreeNode*& ans) {
        if(!copy) return;
        
        if(copy->val == target->val) {
            ans = copy;
        }
        
        dfs(copy->left, target, ans);
        dfs(copy->right, target, ans);
        
        return;
    }
    
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        TreeNode* ans = nullptr;
        dfs(cloned, target, ans);
        return ans;
    }
};