class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root==NULL)return NULL;
	 
        if(root->val==key){
		  
            if(root->left==NULL && root->right==NULL)return NULL;
            if(root->left==NULL) return root->right;
            if(root->right==NULL) return root->left;
            TreeNode* temp=root->right;
            while(temp->left){
                temp=temp->left;
            }
            int val=temp->val;
            deleteNode(root,temp->val);
            root->val=val;
            return root;
        }
        
        if(root->val>key){
            root->left=deleteNode(root->left,key);
        }else{
            root->right=deleteNode(root->right,key);
        }
        
        return root;
    }
};