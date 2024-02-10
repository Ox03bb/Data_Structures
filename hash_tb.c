#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

// Hash Table

typedef ndp *hash_tb;
int size;

void create(int size){
    hash_tb ht;
    ht = malloc(sizeof(hash_tb)*size);
}   


void insrt(hash_tb ht,int dt){
    ndp nd , scnr;
    int clc;

    nd = malloc(sizeof(noude));

    nd->data = dt;
    nd->next = NULL;

    clc = dt % size;

    if (ht[clc] == NULL){
        ht[clc] = nd;
    }
    else{
        scnr = ht[clc];
        while (scnr->next != NULL){
            scnr = (*scnr).next;
        }
        scnr->next = nd;
    }
    
}

void main(){
    
}
