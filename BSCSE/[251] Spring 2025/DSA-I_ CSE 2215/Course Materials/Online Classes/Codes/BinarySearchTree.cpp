#include<stdio.h>
#include<stdlib.h>

struct Node {
    int value;
    struct Node *left, *right, *parent;
};

struct Node *root = NULL;

void insert(int value) {
    struct Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->parent = NULL;

    if(root == NULL) {
        root = newNode;
    }
    else {
        struct Node *temp = root;
        while(temp != NULL) {
            int cur = temp->value;
            if(cur > value) {
                if(temp->left == NULL) {
                    // last node 
                    newNode->parent = temp;
                    temp->left = newNode;
                    break;
                }
                temp = temp->left;
            }
            else {
                if(temp->right == NULL) {
                    // last node
                    temp->right = newNode;
                    newNode->parent = temp;
                    break;
                }
                temp = temp->right;
            }
        }
    }
}

void inorder(struct Node *cur = root) {
    if(cur == NULL) return;
    inorder(cur->left);
    // visit
    printf("%d ", cur->value);
    inorder(cur->right);
}

void search(int value) {
    struct Node *temp = root;
    while(temp!=NULL) {
        if(temp->value == value) {
            printf("found\n");
            return;
        }
        if(value < temp->value) {
            temp = temp->left;
        }
        else {
            temp = temp->right;
        }
    }
}

int main() {
    insert(44);
    insert(17);
    insert(88);
    insert(32);
    insert(65);
    insert(97);
    insert(28);
    insert(54);
    insert(82);
    insert(29);
    insert(76);
    insert(80);

    inorder();

    search(82);

}