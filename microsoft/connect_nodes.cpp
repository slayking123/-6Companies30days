class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       queue<Node *> q;
       q.push(root);
       q.push(NULL);
       vector<Node *> v;
       while(q.size()>1)
       {
           Node *f=q.front();
           v.push_back(f);
           q.pop();
           if(!f){
               q.push(NULL);
               continue;
           }
           if(f->left) q.push(f->left);
           if(f->right) q.push(f->right);
       }
       for(int i=0;i<v.size()-1;i++)
       {
           if(v[i]) v[i]->nextRight=v[i+1];
       }
       v[v.size()-1]->nextRight=NULL;
    }    
};
