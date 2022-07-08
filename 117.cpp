class Solution {
public:
    Node* connect(Node* r) {
        if(r == NULL) return r;
        queue<Node*> q;
        vector<Node*> con;
        q.push(r);
        q.push(NULL);
        while(!q.empty()){
            Node* t = q.front();
            if(t == NULL){
                q.pop();
                con.push_back(NULL);
                for(int i = 0;i<con.size()-1;i++)
                    con[i]->next = con[i+1];
                con.clear();
                if(!q.empty()) q.push(NULL);
            }else{
                q.pop();
                con.push_back(t);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            
        }
        return r;
    }
};