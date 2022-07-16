class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> v;
        if(!root)
            return v;
        
        queue<TreeNode*> q;
        int count = 1;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            vector<int> l;
            
            for(int i=0; i<n; i++)
            {
                auto x = q.front();
                q.pop();
                l.push_back(x->val);
                if(x->left!=NULL)
                    q.push(x->left);
                if(x->right!=NULL)
                    q.push(x->right);
            }
            if(count%2 == 0)
              reverse(l.begin(),l.end());
            v.push_back(l);
            count++;
        }
         return v;
    }
   
};