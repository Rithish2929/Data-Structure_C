#include <stdio.h>
#include<stdlib.h>

struct Node{
    struct Node * prev;
    int data ;
    struct Node * next;
};

int main(){
    struct Node * N1=(struct Node *)malloc(sizeof(struct Node));
    struct Node * N2=(struct Node *)malloc(sizeof(struct Node));
    struct Node * N3=(struct Node *)malloc(sizeof(struct Node));
    struct Node *N4=(struct Node *)malloc(sizeof(struct Node));

   N1->prev = NULL;
    N1->data = 23;
    N1->next = N2;

    N2->prev = N1;
    N2->data = 42;
    N2->next = N3;

    N3->prev = N2;
    N3->data = 13;
    N3->next = N4;

    N4->prev = N3;
    N4->data = 36;
    N4->next = NULL;
}

//TASK-DO a Code for traversal complete list in forward till NULL then again go in Backward