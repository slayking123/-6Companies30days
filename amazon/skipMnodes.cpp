class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        Node *ptr=head;
        Node *prev;
        int c;
        while(ptr)
        {
            for(c=1;c<M && ptr!=NULL;c++) ptr=ptr->next;
            if(!ptr) return;
            prev=ptr->next;
            for(c=1;c<=N && prev!=NULL;c++)
            {
              //  Node *temp=prev;
                prev=prev->next;
              //  delete(temp);
            }
            ptr->next=prev;
            ptr=prev;
        }
    }
};
