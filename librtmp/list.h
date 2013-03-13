#ifndef LIST_H
#define LIST_H

#ifndef NULL
#define NULL 0
#endif
#define TRUE 1
#define FALSE 0

typedef struct LIST_ITEM {
    void* data;
    struct LIST_ITEM* prev;
    struct LIST_ITEM* next;
} LIST_ITEM;

typedef struct LIST {
    struct LIST_ITEM* head;
    struct LIST_ITEM* tail;
    int length;
} LIST;

int list_init(LIST* list);
int list_item_init(LIST_ITEM* list_item);
int list_length(LIST* list);
int list_prepend(LIST* list, LIST_ITEM* list_item);
int list_append(LIST* list, LIST_ITEM* list_item);
int list_pop(LIST* list, LIST_ITEM** list_item);
#endif