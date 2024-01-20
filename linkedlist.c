#include <stdlib.h>
#include <stdio.h>

// typedef struct noude ;
// typedef noude *ndp;

// typedef struct noude {
//     int data;
//     ndp next;
// }noude;

typedef struct noude noude;
typedef noude *ndp;

typedef struct noude {
    int data;
    ndp next;  
} noude;



ndp insrt(ndp head,int dt){ 
    ndp hp;       //helper pionter
    hp = malloc(sizeof(noude));
    (*hp).data = dt;     //its the same of hp->data
    (*hp).next = head;
    return hp;
}

void display(ndp head){
    ndp scaner = head;

    while (scaner != NULL){
        printf("%d\n",(*scaner).data);
        scaner = (*scaner).next;
    }
    
}

void main(int argc, char const *argv[]){
    ndp hd = NULL; // hd mean head
    hd = insrt(hd ,1);
    hd = insrt(hd ,2);
    hd = insrt(hd ,3);

    // hd = insrt(hd ,4);
    display(hd);
    
}
