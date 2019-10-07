class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL)
            return head;
        
        ListNode *temp;
        ListNode *p1=head;
        ListNode *p2=head;
        ListNode *end=head;
        
        int len=1;
        
        while(end->next!=NULL)
        {
            len++;
            end=end->next;
        }
        
        k=k%len;
        
        if(k==0)
            return head;
        
        for(int i=0;i<(len-k-1);i++)
        {
            p2=p2->next;
        }
        
        temp=p2->next;
        end->next=p1;
        head=temp;
        p2->next=NULL;
        
        return head;
    }
};
