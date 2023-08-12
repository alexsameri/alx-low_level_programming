#include "lists.h"
#include <stdio.h>

typedef struct list_t {
    char *str;
    struct list_t *next;
} list_t;

size_t print_list(const list_t *h) {
    size_t count = 0;

    if (h == NULL) {
        printf("[0] (nil)\n");
        return count;
    }

    printf("[");
    while (h != NULL) {
        if (h->str == NULL) {
            printf("0");
        } else {
            printf("%s", h->str);
        }

        count++;
        h = h->next;

        // Print comma if there are more elements
        if (h != NULL) {
            printf(", ");
        }
    }
    printf("]\n");

    return count;
}
