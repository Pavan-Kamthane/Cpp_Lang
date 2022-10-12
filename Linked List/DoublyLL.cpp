#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
        Node* prev;
        int data;
        Node* next;

    Node(int data){
        this->prev = NULL;
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Deleted value is : "<< value << endl;
    }
};

void insertAtHead(Node* &head , Node* &tail , int data){
    
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }

    else{
        //new node created
        Node* temp = new Node(data);

        temp->next = head;
        head->prev = temp;
        head = temp;
}
    
}

void insertAtTail(Node* &head , Node* &tail , int data){

    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
    }

    else{
        //new node created
        Node* temp = new Node(data);
    
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    
}

void insertAtPosition(Node* &head , Node* &tail , int data , int pos){

    if(pos == 1){
        insertAtHead(head,tail,data);
        return ;
    }

    Node* temp = new Node(data);
    Node* p = head;
    int count = 1;
    while(count < pos){
        p = p->next;
        count++;
    }
    
    if(temp -> next == NULL){
        insertAtTail(head , tail , data);
        return;
    }

    temp->next = p->next;
    p->next->prev = temp;
    p->next = temp;
    temp->prev = p;
}

void deleteAtPosition(Node* &head , Node* &tail , int pos){

    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

void display(Node* &head){

    Node* p = head;
    while(p != NULL){
        cout<<p->data<< " ";
        p = p->next;
    }
    cout<<endl;
}

int main(){

    Node* head = new Node(10);
    Node* tail = head;

    insertAtHead(head , tail , 5);
    display(head);

    insertAtTail(head , tail , 15);
    display(head);
    
    insertAtPosition(head , tail , 100 , 4);
    display(head);

    deleteAtPosition(head,tail,3);
    display(head);
}