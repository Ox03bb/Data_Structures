#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

// Hash Table

typedef struct hash_tb{
    int **tb ;
    int **pts;
    int size;
}hash_tb;

void create(int size){
    hash_tb ht;

    ht.tb   = malloc(sizeof(hash_tb));
    ht.pts  = malloc(sizeof(hash_tb));
    ht.size = size; 
}   

void insrt(hash_tb ht,int dt){
    ndp nd , scnr;
    int clc;

    nd = malloc(sizeof(noude));

    nd->data = dt;
    nd->next = NULL;

    clc = dt % ht.size;

    if (ht.tb[clc] == NULL){
        ht.tb[clc] = nd;
    }
    else{
        scnr = ht.tb[clc];
        while (scnr->next != NULL){
            scnr = (*scnr).next;
        }
        scnr->next = nd;
    }
    
}

