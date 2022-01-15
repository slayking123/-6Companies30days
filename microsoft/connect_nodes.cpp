class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       queue<Node *> q;
       q.push(root);
       q.push(NULL);
       while(q.size()>1)
       {
           Node *f=q.front();
           q.pop();
           if(!f){
               q.push(NULL);
               continue;
           }
           f->nextRight=q.front();
           if(f->left) q.push(f->left);
           if(f->right) q.push(f->right);
       }
    }    
};
