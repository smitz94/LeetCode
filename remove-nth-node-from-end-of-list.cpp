class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *temp= new ListNode(0);
        temp->next=head;
        
        ListNode *slow,*fast;
        slow=temp;
        fast=temp;
        
        if(head==nullptr)
            return head;
        
        for(int i=0;i<n+1;i++)
            fast=fast->next;
        
        while(fast!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        slow->next=slow->next->next;
        return temp->next;
        
    
    }
        
};
