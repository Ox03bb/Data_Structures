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

void prepend(ndp *head,int dt){ 
    ndp hp ;       //helper pionter 

    hp = malloc(sizeof(noude));
    (*hp).data = dt;     //its the same of hp->data
    (*hp).next = *head;

    *head = hp;
    
}

// ndp insrt(ndp head,int dt,int index){ 
//     ndp hp , scnr = head;       //helper pionter
    
//     if (index == 0){
//         return prepend(head , dt);
    
//     }
//     else if (index == -1){
//         return append(head,dt);
//     }
    

//     // }

//     // else{ 
//     //     for (int cnt = 0; cnt <= index; cnt ++){
//     //       scnr = (*scnr).next; 
//     //     }
//     // }
//     // hp = malloc(sizeof(noude));
    
// }
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
    
    while (scaner != NULL){
        printf("%d\n",(*scaner).data);
        scaner = (*scaner).next;
    }
    
}

void main(int argc, char const *argv[]){
    ndp hd = NULL; // hd mean head
    prepend(&hd ,1);
    printf("%p\n",hd);
    prepend(&hd ,2);
    printf("%p\n",hd);    
    prepend(&hd ,3);
    printf("%p\n",hd);
    // append(hd,5);
    display(hd);
    
    
}
