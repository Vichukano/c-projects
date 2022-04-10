#ifndef LIST_H_SENTRY
#define LIST_H_SENTRY
#define INIT_SIZE 32

typedef struct array_list {
    int size;
    int *elements;
} array_list;

array_list new_array_list();

int get(int index, array_list *list);

void add(int element, array_list *list);

#endif
