#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 3

typedef struct {
    char name[MAX_NAME];
    int age;
} person;

person *hash_table[TABLE_SIZE];

unsigned int hash(char *name){
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for (int i = 0; i < length; i++)
    {
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

void init_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
}

void print_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if(hash_table[i] == NULL)
        {
            printf("--------\t %d\n", i);
        } else{
            printf("%d\t%s\n", i, hash_table[i]->name);
        }
    }
}

bool insert_table(person*p)
{
    if (p == NULL){
        return false;
    }
    int index = hash(p->name);
    if (hash_table[index] != NULL){
        return false;
    }
    hash_table[index] = p;
    return true;
}
int main(int argc, char *argv[])
{
    init_table();
    
    person Jowie = {.name="Jowie", .age=20};
    person Kuku = {.name="Kuku", .age=20};
    person Why = {.name="Why", .age=20};
    person Me = {.name="Me", .age=20};
    person C = {.name="C", .age=20};
    insert_table(&Jowie);
    insert_table(&Kuku);
    insert_table(&Why);
    insert_table(&Me);
    insert_table(&C);
    print_table();
    // printf("Jowie ==> %u\n", hash("Jowie"));
    // printf("BPAL ==> %u\n", hash("BPAL"));
    // printf("Why ==> %u\n", hash("Why"));
    // printf("Kuku ==> %u\n", hash("Kuku"));
    return 0;
    
}