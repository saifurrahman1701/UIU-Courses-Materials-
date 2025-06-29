#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *head = NULL;

void insertFirst(int val) {
    /// create a node
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    /// write the value
    newNode->value = val;
    /// condition check
    if(head == NULL) {
        /// empty list
        newNode->next = NULL;
        head = newNode;
    }
    else {
        /// not empty
        newNode->next = head;
        head = newNode;
    }
}

void insertLast(int val) {
    if(head == NULL) {
        insertFirst(val);
        return;
    }
    /// create a node
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    /// write the value
    newNode->value = val;
    /// Find the last element
    struct node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    /// adjust pointers
    newNode->next = NULL;
    temp->next = newNode;
}

void insertAny(int num, int val) {

}

void deleteFirst() {

}

void deleteLast() {

}

void deleteAny(int val) {

}

void reverseList() {
    // before calling this function 
    // head: 4->3->2->1->NULL

    // after calling this function
    // head: 1->2->3->4->NULL

}

void findMiddle() {
    // find the middle of the list. 
    // head: 1->2->3->4->5->NULL (while number of element is odd)
    // middle = 3

    // head: 1->2->3->4->5->6->NULL (while nubmer of element is even)
    // middle = 4


}

void rotateList(int k) {
    // Given a singly linked list and an integer k, the task is to rotate the linked list to the left by k places.

    // Input: 10->20->30->40->50

    // k = 1 : 50->10->20->30->40
    // k = 2 : 40->50->10->20->30
    // k = 3 : 30->40->50->10->20
    // k = 4 : 20->30->40->50->10
    // k = 5 : 10->20->30->40->50
    // k = 6 : 50->10->20->30->40
    // ...
    
}

void findNthFromLast(int N) {
    // Given a Linked List of M nodes and a number N, find the value at the Nth node from the end of the Linked List. If there is no Nth node from the end, print -1.

}

void detectCycle() {
    // Detect Loop or Cycle in Linked List
    // Link: https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/ (Floyd’s Cycle-Finding Algorithm)


}
void bubbleSort() {
    // sort the linked list using bubble sort
}



void printList() {
    struct node *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    
}
