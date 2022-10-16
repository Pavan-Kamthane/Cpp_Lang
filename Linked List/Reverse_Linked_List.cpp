#include <iostream>
using namespace std;
// practice --> https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverseList(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *prev = NULL, *nxt = NULL;
    while (head != NULL)
    {
        nxt = head->next;
        head->next = prev;
        prev = head;
        head = nxt;
    }

    return prev;
}

int main()
{
  //demo list
    ListNode *t1, *t2, *t3, *t4, *t5;
    t1 = new ListNode(1);
    t2 = new ListNode(2);
    t3 = new ListNode(3);
    t4 = new ListNode(4);
    t5 = new ListNode(5);
    t1->next = t2;
    t2->next = t3;
    t3->next = t4;
    t4->next = t5;
    t5->next = NULL;

    ListNode *h = reverseList(t1);
    while (h != NULL)
    {
        cout << h->val << " ";
        h = h->next;
    }

    return 0;
}
