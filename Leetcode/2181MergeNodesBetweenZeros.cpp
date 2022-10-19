class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        ListNode* temp = head;
        ListNode* temp2 = head;
        while(temp!=NULL){
            temp = temp->next;
            while(temp->val!=0){
                temp2->val += temp->val;
                temp = temp->next;
            }
            temp = temp->next;
            temp2->next = temp;
            temp2 = temp2->next;
        }
        return head;
    }  
};