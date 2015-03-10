#include <stdlib.h>

typedef struct island {
    char* name;
    char* opens;
    char* closes;
    struct island *next;
} island;


island* create(char* name){
    island* i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}

void release(island* start){
    island* i = start;
    island* next = NULL;
    for (; i!=NULL; i = next){
        next = i->next;
        free(i->name);
        free(i);
    }
}
