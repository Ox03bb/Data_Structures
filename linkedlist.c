#include <stdlib.h>
#include <stdio.h>




typedef struct noude noude;
typedef noude *ndp;

typedef struct noude {
    int data;
    ndp next;  
} noude;

void append(ndp *head,int dt);

void prepend(ndp *head,int dt){ 
    ndp hp ;       //helper pionter 

    hp = malloc(sizeof(noude));
    (*hp).data = dt;     //its the same of hp->data
    (*hp).next = *head;

    *head = hp;
    
}

void insrt(ndp head,int dt,int index){ 
    ndp hp , scnr = head;       //helper pionter
    
    if (index == 0){
        prepend(&head , dt);
    
    }

    else if (index == -1){
        append(&head,dt);
    }
    
      
    else{ 
        hp = malloc(sizeof(noude));
        (*hp).data = dt;

        scnr = head; 

        for (int pos = 0; pos < index - 1; pos ++){
            scnr = (*scnr).next; 
        }

        (*hp).next   = (*scnr).next ;
        (*scnr).next = hp;
    }
    
}
 

void append(ndp *head,int dt){ 
    ndp scnr = *head ,new_noude;       //helper pionter
    
    new_noude = malloc(sizeof(noude));
    (*new_noude).data = dt;
    (*new_noude).next = NULL;

    while ((*scnr).next != NULL){
        scnr = (*scnr).next;
    }
    
    (*scnr).next = new_noude;
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
    prepend(&hd ,1);
    prepend(&hd ,2);
    prepend(&hd ,3);
    insrt(hd,55,0);
    prepend(&hd ,777);

    display(hd);
    
}
