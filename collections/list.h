#ifndef LIST_H_SENTRY
#define LIST_H_SENTRY

typedef union val {
    int int_value;
    long long_value;
    double double_value;
} val;

typedef struct List {
    val value;
    struct List *next;
} List;

List *push_list(List *list, val value);

List *pop_list(List *list);

List *new_list(val value);

void free_list(List *list);

void print_list(List *list);

#endif
