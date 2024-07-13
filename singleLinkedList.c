//implementation of a single linked list in C
#include <stdio.h>
#include <stdlib.h>

struct Node { //we need to struct the node first
    int data; 
    struct Node* next;
};

//functions to manipulate the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//now to add the member after first member inserted
void insertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("prev member cant be NULL \n");
        return;
    }
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
//now to add member at the end of the node
void afterend(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while(last->next != NULL) {
        last = last->next;
    }
    last=last->next;
    return;
}

//deleting a node
void deleteNode(struct Node** head_ref,int key) {
    struct Node* temp = *head_ref, *prev;
    if (temp!=NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp!=NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp==NULL) return;
    prev->next = temp->next;
    free(temp);
}


int searchNode(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key)
            return 1;
        current = current->next;
    }
    return 0;
}


void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ",node -> data);
        node = node -> next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    afterend(&head,1);
    insertAtBeginning(&head,2);
    insertAtBeginning(&head,3);
    afterend(&head,4);
    insertAfter(head->next,5);


    printf("Linked list after inserting at the beginning: ");
    printList(head);

    int key = 21;
    if (searchNode(head,key)) {
        printf("Node with data %d found in the list.\n",key);
    }
    else {
        printf("Doesnt Found\n");
    }

    deleteNode(&head,1);
    printList(head);

    


    return 0;
}


