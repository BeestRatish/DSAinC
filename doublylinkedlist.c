#include <stdio.h>
#include <stdlib.h>

//first we need to define the node structure
struct Node {
    int data;
    struct Node* prev; 
    struct Node* next;
    };

// first create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;}

//implementing this in struct to add a node at the the beginning
void insertAtFront(struct Node** head, int data) {
    


}




int main() {
    struct Node* head = NULL;



}
