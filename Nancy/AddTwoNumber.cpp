class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *tem=NULL;
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        ListNode *curr;
        int carry=0;
        int x;
        int y;
        while(temp1!=NULL||temp2!=NULL)
        {
            if(temp1!=NULL)
            {
                 x=temp1->val;
            }
            else
                 x=0;
            if(temp2!=NULL)
            {
                 y=temp2->val;
            }
            else
                 y=0;
            int sum=carry+x+y;
            carry=sum/10;
            curr=new ListNode(sum%10);
            if(tem==NULL)
            {
                tem=curr;
            }
            else
            {
            ListNode *t=tem;
                while(t->next!=NULL)
                {
                    t=t->next;
                }
                t->next=curr;
            }
            if(temp1!=NULL)
            {
                temp1=temp1->next;
            }
             if(temp2!=NULL)
            {
                temp2=temp2->next;
            }
        }
       
        if(carry>0)
        {
            curr->next=new ListNode(carry);
        }
        return tem;
        
    }
};