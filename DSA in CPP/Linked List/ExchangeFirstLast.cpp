// Given Circular linked list exchange the first and the last node. The task should be done with only one extra node,
// you can not declare more than one extra node, and also you are not allowed to declare any other temporary variable. 

// CPP program to exchange first and
// last node in circular linked list
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

struct Node* addToEmpty(struct Node* head, int data)
{
	// This function is only for empty list
	if (head != NULL)
		return head;

	// Creating a node dynamically.
	struct Node* temp
		= (struct Node*)malloc(sizeof(struct Node));

	// Assigning the data.
	temp->data = data;
	head = temp;

	// Creating the link.
	head->next = head;

	return head;
}

struct Node* addBegin(struct Node* head, int data)
{
	if (head == NULL)
		return addToEmpty(head, data);

	struct Node* temp
		= (struct Node*)malloc(sizeof(struct Node));

	temp->data = data;
	temp->next = head->next;
	head->next = temp;

	return head;
}

/* function for traversing the list */
void traverse(struct Node* head)
{
	struct Node* p;

	// If list is empty, return.
	if (head == NULL) {
		cout << "List is empty." << endl;
		return;
	}

	// Pointing to first Node of the list.
	p = head;

	// Traversing the list.
	do {
		cout << p->data << " ";
		p = p->next;

	} while (p != head);
}

/* Function to exchange first and last node*/
struct Node* exchangeNodes(struct Node* head)
{
	// If list is of length 2
	if (head->next->next == head) {
		head = head->next;
		return head;
	}

	// Find pointer to previous of last node
	struct Node* p = head;
	while (p->next->next != head)
		p = p->next;

	/* Exchange first and last nodes using
	head and p */
	p->next->next = head->next;
	head->next = p->next;
	p->next = head;
	head = head->next;

	return head;
}

// Driven Program
int main()
{
	int i;
	struct Node* head = NULL;
	head = addToEmpty(head, 6);

	for (i = 5; i > 0; i--)
		head = addBegin(head, i);
	cout << "List Before: ";
	traverse(head);
	cout << endl;

	cout << "List After: ";
	head = exchangeNodes(head);
	traverse(head);

	return 0;
}
