#include "list.h"

BOOL list_init(LIST* list)
{
    if (!list) return FALSE;

    list->head = NULL;
    list->tail = NULL;
    list->length = 0;

    return TRUE;
}

BOOL list_item_init(LIST_ITEM* list_item)
{
    if (!list_item) return FALSE;

    list_item->data = NULL;
    list_item->prev = NULL;
    list_item->next = NULL;
    return TRUE;
}

int list_length(LIST* list)
{
    if (!list) return -1;

    return list->length;
}

BOOL list_prepend(LIST* list, LIST_ITEM* list_item)
{
    if (!list || !list_item) return FALSE;

    if (list_length(list) == 0) {
        /* First list item */
        list->tail = list_item;
    }
    else {
        list_item->next = list->head;
        list->head->prev = list_item;
    }

    list->head = list_item;
    list->length++;

    return TRUE;
}

BOOL list_append(LIST* list, LIST_ITEM* list_item)
{
    if (!list || !list_item) return FALSE;

    if (list_length(list) == 0) {
        /* First list item */
        list->head = list_item;
    }
    else {
        list_item->prev = list->tail;
        list->tail->next = list_item;
    }

    list->tail = list_item;
    list->length++;

    return TRUE;
}

BOOL list_pop(LIST* list, LIST_ITEM** list_item)
{
    if (!list || !list_item || list_length(list) == 0) return FALSE;

    *list_item = list->head;

    list->head = (*list_item)->next;
    (*list_item)->next = NULL;
    list->length--;

    if (list_length == 0) {
        list->head = NULL;
        list->tail = NULL;
    }

    return TRUE;
}
