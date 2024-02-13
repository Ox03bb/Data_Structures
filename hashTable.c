#include <stdlib.h>
#include <stdio.h>
#include "hashTable.h"

int hash(int data, int size){
    return data % size;
}

hashTable *initHashTable(int size){
    hashTable *ht = malloc(sizeof(hashTable));
    ht->size = size;
    ht->table = malloc(sizeof(node) * size);
    for (int i = 0; i < size; i++){
        ht->table[i] = NULL;
    }
    return ht;
}

void insertHT(hashTable *ht, int data){
    int index = hash(data, ht->size);
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    newNode->next = ht->table[index];
    ht->table[index] = newNode;
}

void appendHT(hashTable *ht, int data){
    int index = hash(data, ht->size);
    node *newNode = malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if (ht->table[index] == NULL){
        ht->table[index] = newNode;
    }
    else{
        node *current = ht->table[index];
        while (current->next != NULL){
            current = current->next;
        }
        current->next = newNode;
    }
}

void printHT(hashTable *ht){
    printf("{\n");
    for (int i = 0; i < ht->size; i++){
        node *current = ht->table[i];
        printf("    ( ");
        while (current != NULL){
            printf("[%d] -> ", current->data);
            current = current->next;
        }
        printf("[NULL] )\n");
    }
    printf("}\n");
}

void main(){
    hashTable *ht = initHashTable(5);
    appendHT(ht, 1);
    appendHT(ht, 2);
    appendHT(ht, 3);
    appendHT(ht, 4);
    appendHT(ht, 5);
    appendHT(ht, 6);
    appendHT(ht, 7);
    appendHT(ht, 8);
    appendHT(ht, 9);
    appendHT(ht, 10);
    appendHT(ht, 20);
    appendHT(ht, 30);

    printHT(ht);
}
