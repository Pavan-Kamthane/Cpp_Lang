#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
}*start = NULL;

void insertAtFront(){

    int data;
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);

    temp->data = data;
    temp->prev = NULL;

    temp->next = start;
    start = temp;

}

void insertAtEnd(){

    int data;
    struct node *temp, *trav;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->prev = NULL;
    temp->next = NULL;

    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);

    temp->data = data;
    temp->next = NULL;
    trav = start;
    
    if (start == NULL)
        start = temp;
    
    else {
        while (trav->next != NULL)
            trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
}

void insertAtPosition(){
    
    int data, pos, i = 1;
    struct node *temp, *extra;
    extra = malloc(sizeof(struct node));
    
    extra->next = NULL;
    extra->prev = NULL;
    
    printf("\nEnter position : ");
    scanf("%d", &pos);
    
    if (start == NULL) {
        start = extra;
        extra->prev = NULL;
        extra->next = NULL;
    }
    
    else if (pos == 1) 
        insertAtFront();
    
    else {
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    extra->data = data;
    temp = start;
    while (i < pos - 1) {
    temp = temp->next;
    i++;
    }
    extra->next = temp->next;
    extra->prev = temp;
    temp->next = extra;
    temp->next->prev = extra;
    }
}

void deleteFirst(){
    struct node* temp;
    
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        start = start->next;
        
        if (start != NULL)
            start->prev = NULL;
        
        free(temp);
    }
}

void deletePosition(int pos){
    
    int  i = 1;
    struct node *temp, *position;
    temp = start;
    
    if (start == NULL)
        printf("\nList is empty\n");
    
    else {
    
        if (pos == 1) {
            deleteFirst();
            
            if (start != NULL)
                start->prev = NULL;
        
        free(position);
        return;
    }
    
    while (i < pos - 1) {
        temp = temp->next;
        i++;
    }
    
    position = temp->next;
    
    if (position->next != NULL)
        position->next->prev = temp;
    
    temp->next = position->next;
    
    free(position);
    }
}

void deletebyvalue(){

    int num;
    struct node* temp;
    temp = start;

    if (start == NULL)
        printf("\nList is empty\n");
    
    else {
        printf("\nEnter Value to be deleted : ");
        scanf("%d", &num);
    }

    int count = 1;

    while(temp->data != num){
        temp = temp->next;
        count++;
    }

    if(count > 0){
        deletePosition(count);
    }

}

void print(){

    if (start == NULL){
        printf("\nList is empty\n");
        return;
    }

    struct node* temp;
    temp = start;

    printf("\nData = ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

    int choice;
    
    while (choice != 8){

        printf("\nDoubly Linked List Menu:\n");
        printf("1. Insertion at Beginning\n");
        printf("2. Insertion at End\n");
        printf("3. Insertion at particular Location\n");
        printf("4. Deletion by Value\n");
        printf("5. Display the List\n");
        printf("6. Exit the menu\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insertAtFront();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                insertAtPosition();
                break;
            case 4:
                deletebyvalue();
                break;
            case 5:
                print();
                break;
            case 6:
                exit(1);
                break;
            default:
                printf("Incorrect Choice. Please Try Again \n");
                continue;
        }
    }
    return 0;
}
