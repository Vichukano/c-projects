#include "list.h"
#include <stdio.h>
#include <stdlib.h>

array_list new_array_list() {
    array_list list;
    list.size = 0;
    list.elements = malloc(INIT_SIZE * sizeof(int));
    return list;
};

int get(int index, array_list *list) {
    if (list->size <= index) {
        fprintf(stderr, "Size of list less then index of elemetn\n");
        exit(1);
    }
    return list->elements[index];
};

void add(int element, array_list *list) {
    list->elements[list->size] = element;
    list->size++;
}
