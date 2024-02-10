#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct noude noude;
typedef noude *ndp; 

typedef struct noude {
    int data;
    ndp next;  
} noude;

typedef noude *ndp; 


int lnt(ndp head);
void display(ndp head);


void perpend(ndp *head,int dt);
void insert(ndp *head,int dt,int pos);
void append(ndp *head,int dt);

void del(ndp *head,int indx);

void update(ndp *head,int dt,int indx);

#endif // LINKEDLIST_H

