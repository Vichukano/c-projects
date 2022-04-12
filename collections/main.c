#include "list.h"
#include <stdio.h>

int main() {
    val value;
    value.int_value = 1;
    List *head = new_list(value);
    value.int_value = 2;
    List *next = push_list(head, value);
    value.int_value = 3;
    next = push_list(next, value);
    print_list(head);
    printf("------------\n");
    List *pop = pop_list(head);
    pop = pop_list(pop);
    print_list(pop);
    free_list(head);
    return 0;
}
