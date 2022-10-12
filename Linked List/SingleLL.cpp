#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;

    //constructor
    Node(int data){   
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        } 
        cout<<"Deleted value is : "<< value << endl;
    }
};

void insertAtHead(Node* &head , int data){   //head is taken as reference 

    //new Node created
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

//insert a new node at last
//we make use of tail pointer that always shows the last node in given LL
void insertAtTail(Node* &tail , int data){

    //new Node created
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head , Node* &tail , int data , int pos){

    if(pos == 1)
    {
        insertAtHead(head , data);
        return;
    }

    //new Node created
    Node* temp = new Node(data);

    Node* p = head;
    int count = 1;
    while(count < pos-1){
        p = p->next;
        count++;
    }

    if(p->next == NULL){
        insertAtTail(tail , data);
        return ;
    }

    temp->next = p->next;
    p->next = temp;
}

//delete start node
void deleteHead(Node* &head){
    Node* temp = head;
    head = head -> next;
    temp->next = NULL;
    delete temp;
}

void deleteAtPosition(Node* &head , Node* &tail , int pos){

    if(pos == 1){
        deleteHead(head);
        return ;
    }

    else{
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;

        while(count < pos){
            prev = curr;
            curr = curr->next;
            count++;
        }

        prev->next = curr->next;
        if(curr->next == NULL){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void display(Node* &head){
    Node* p = head;
    while(p != NULL){
        cout<< p->data << " ";
        p = p->next;
    }
    cout<<endl;
}

int main(){

    Node* head = new Node(10);  //new Node created and passed data
    Node* tail = head;

    insertAtHead(head , 5);
    display(head);

    insertAtTail(tail,15);
    display(head);

    insertAtPosition(head , tail , 12 , 3);
    display(head);

    deleteAtPosition(head , tail , 4);
    display(head);
    cout<<"tail data : "<<tail->data;
    return 0;
}