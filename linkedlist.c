#include <stdlib.h>
#include <stdio.h>




typedef struct noude noude;
typedef noude *ndp;

typedef struct noude {
    int data;
    ndp next;  
} noude;

void append(ndp *head,int dt);

int lnt(ndp head){  //lenght
    int lth=0;
    while (head != NULL ){
        head = (*head).next;
        lth ++;
    }
    return lth;
}

void prepend(ndp *head,int dt){ 
    ndp hp ;       //helper pionter 

    hp = malloc(sizeof(noude));
    (*hp).data = dt;     //its the same of hp->data
    (*hp).next = *head;

    *head = hp;
    
}

void insrt(ndp *head,int dt,int index){ 
    ndp hp , scnr ;       //helper pionter
    
    if (index > 0){ 
        hp = malloc(sizeof(noude));
        (*hp).data = dt;

        scnr = *head; 

        for (int pos = 0; pos < index - 1; pos ++){
            scnr = (*scnr).next; 
        }

        (*hp).next   = (*scnr).next ;
        (*scnr).next = hp;
    }
    
    else if (index == 0){
        prepend(head , dt);
    
    }

    else{
        int lt;
        lt = lnt(*head);

        hp = malloc(sizeof(noude));
        (*hp).data = dt;

        scnr = *head; 

        for (int pos = 0; pos < (lt ) + index ; pos ++){
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

void del(ndp *head,int indx){
    ndp scnr = *head ,scnr2;
    if (indx == 0){
        scnr = *head;
        *head = (*(*head)).next;
        free(scnr);
    }
    
   //! i have to fix this 
    
    else if (indx == -1){
        while (scnr->next->next != NULL){
            scnr = (*scnr).next;
        }
        scnr2 = (*scnr).next;
        free (scnr2);
        (*scnr).next= NULL;
        // free(scnr);
    }
    
    for (int pos = 0; pos < indx - 1; pos++){
        scnr = scnr->next;  //the same of (*scnr).next
    }
    (*scnr).next = (*scnr).next;

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
    prepend(&hd ,4);
    prepend(&hd ,5);
    prepend(&hd ,6);
    del(&hd,-1);

    display(hd);
    
}
