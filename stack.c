#include <stdlib.h>
#include <stdio.h>

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

void push(itp *head,int dt){
    itp p;
    p = malloc(sizeof(item));
    p->data = dt;
   
    p->next = *head ;

    *head = p;
}

int pop(itp *head){
    int val = (*head)->data;
    itp p = *head;
    *head = (*head)->next;
    free(p);
    return val;
}

int peek(itp *head){
    if (*head != NULL){
        return (*head)->data;
    }
}

void diss(itp hd){
    do{
        printf("\n%d",hd->data);
        hd = hd->next;
    }while(hd != NULL);
}
