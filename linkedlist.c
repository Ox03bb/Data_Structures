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
    ndp hp , scnr = head;       //helper pionter
    
    // if (index == 0){
        hp = malloc(sizeof(noude));
        (*hp).data = dt;     //its the same of hp->data
        (*hp).next = head;
        return hp;
    // }

    // else{ 
    //     for (int cnt = 0; cnt <= index; cnt ++){
    //       scnr = (*scnr).next; 
    //     }
    // }
    // hp = malloc(sizeof(noude));

}
void append(ndp head,int dt){ 
    ndp scnr = head ,new_noude;       //helper pionter
    
    new_noude = malloc(sizeof(noude));
    (*new_noude).data = dt;
    (*new_noude).next = NULL;

    while ((*scnr).next != NULL){
        scnr = (*scnr).next;
        printf("%d\n",scnr);
    }
    

    (*scnr).next = new_noude;
}

void display(ndp head){
    ndp scaner = head;
    printf("start\n");
    
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
    insrt_tail(hd,5);
    display(hd);
    
    
}
