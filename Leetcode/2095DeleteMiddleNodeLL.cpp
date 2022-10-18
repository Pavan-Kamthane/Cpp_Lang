class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=NULL){
            temp = temp->next;
            cnt++;
        }
        if(cnt==1){
            return NULL;
        }
        cnt = cnt/2;
        temp = head;
        for(int i=1; i<cnt; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};