#ifndef HASHTABLE_H
#define HASHTABLE_H

typedef struct node{
    int data;
    struct node *next; // pointer to the next node
}node;

typedef struct hashTable {
    int size;
    struct hashNode **table; // pointer to the first node of the table (array of nodes)
} hashTable;

int hash(int data, int size);
hashTable *initHashTable(int size);
void insertHT(hashTable *ht, int data);
void appendHT(hashTable *ht, int data);
// void deleteHT(hashTable *ht, int data);
// int searchHT(hashTable *ht, int data);
void printHT(hashTable *ht);

#endif 

