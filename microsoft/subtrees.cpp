int sum(Node *root,int X,int &c)
{
    if(!root) return 0;
    int s=sum(root->left,X,c)+sum(root->right,X,c)+root->data;
    if(s==X) c++;
    return s;
}
int countSubtreesWithSumX(Node* root, int X)
{
	int c=0;
    int x=sum(root,X,c);
    return c;
}
