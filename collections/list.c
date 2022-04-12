#include "list.h"
#include <stdio.h>
#include <stdlib.h>

List *new_list(val value) {
    List *list = malloc(sizeof(List));
    list->value = value;
    list->next = NULL;
    return list;
}

void free_list(List *list) {
    List *list_ptr;
    while (list != NULL) {
        list_ptr = list->next;
        free(list);
        list = list_ptr;
    }
}

List *push_list(List *list, val value) {
    List *next_list = new_list(value);
    list->next = next_list;
    return next_list;
}

List *pop_list(List *list) {
    List *curr = list;
    List *next = curr->next;
    curr->next = NULL;
    return next;
}

void print_list(List *list) {
    while (list != NULL) {
        printf("Value: %d\n", list->value.int_value);
        list = list->next;
    }
}
