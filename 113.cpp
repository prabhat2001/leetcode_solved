class Solution {
public:
	void getPath(TreeNode* root, int targetSum,vector<int>temp,vector<vector<int>>&ans){
		if(root==NULL)
			return;
		if(!root->left && !root->right && targetSum==root->val){
			temp.push_back(root->val);
			ans.push_back(temp);
			return;
		}
		temp.push_back(root->val);
		getPath(root->left,targetSum-root->val,temp,ans);
		getPath(root->right,targetSum-root->val,temp,ans);
	}
	vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
		vector<vector<int>>ans;
		vector<int>temp;
		getPath(root,targetSum,temp,ans);
		return ans;
	}
};