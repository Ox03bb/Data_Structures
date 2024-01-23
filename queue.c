#include <stdlib.h>
#include <stdio.h>

// Queue

typedef struct item item;
typedef item *itp; 

typedef struct item {
    int data;
    itp next;  
} item;

int is_empty(itp head){
    if (head == NULL){
        return 1;
    }
    return 0;
}

int size(itp head){
    int cnt=0;
    if (head != NULL){
        while (head->next != NULL){
            cnt ++;
            head = head->next;
        }
        return cnt +1;
    }
    else{
        return 0;
    }    
}

void enqueue(itp *head,int dt){
    itp p,q;
    
    p = malloc(sizeof(item));
    if (p == NULL){
        printf("Erorr: can't allocat addr");
    }

    p->data = dt;
    p->next = NULL;

    if ((*head) == NULL ){
       
        *head = p;
    }
    else{
        q = *head;
        while ((q->next) != NULL){
            q = q->next;
        }
        q->next= p;
    }
}

int dequeue(itp *head){
    itp p ;
    int val;
    if (*head != NULL){
        p = (*head)->next;
    }
    val = (*head)->data;
    free(*head);
    *head = p;
    return val;
}

int del(itp *head){
    itp p = *head;
    *head = (*head)->next;
    free(p);
}

