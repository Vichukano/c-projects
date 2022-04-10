#include "list.h"
#include <stdio.h>

void print_list(array_list *list) {
    printf("List size: %d\n", list->size);
    int i;
    for (i = 0; i < list->size; i++) {
        printf("Element: %d\n", list->elements[i]);
    }
}

int main() {
    array_list list = new_array_list();
    print_list(&list);
    add(1, &list);
    add(2, &list);
    add(3, &list);
    add(4, &list);
    add(5, &list);
    add(55, &list);
    print_list(&list);
    int second_element = get(2, &list);
    int third_element = get(3, &list);
    printf("Element: %d with index: %d\n", second_element, 2);
    printf("Element: %d with index: %d\n", third_element, 3);
    print_list(&list);
    return 0;
}
