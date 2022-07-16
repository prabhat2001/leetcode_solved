class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return func(nums,0,nums.size()-1);
    }
private:
    TreeNode* func(vector<int>& nums,int left,int right){
        if(left>right)
            return NULL;
        int mid = left+(right-left)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = func(nums,left,mid-1);
        root->right = func(nums,mid+1,right);
        return root;
    }
};