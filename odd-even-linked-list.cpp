class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL)
            return head;
        
        ListNode *p1,*p2,*end,*temp;
        
        end=head;
        int count=1;
        
        while(end->next!=NULL)
        {
            count++;
            end=end->next;
        }
        
        if(count<3)
            return head;
        
        int i=0;
        
        if(count%2!=0)
            count=count-1;
            
        p1=head;
        p2=head->next;
        
        while(i<count)
        {
          if(i%2==0)
          {
              temp=p2->next;
              p1->next=temp;
              
              end->next=p2;
              end=end->next;
              
              p2=temp;
              end->next=NULL;
          }
        else
            {
             p1=p1->next;
             p2=p2->next;
            }
            
            i++;
        }
        
        return head;
    }
};
