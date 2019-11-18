#include "list.h"
#include <stdlib.h>
#include <stdbool.h>

int mx_strcmp (const char *s1, const char *s2);

t_list *mx_sort_list (t_list *lst, bool (*cmp)(void *, void*)) {
    for (t_list *i = lst; i->next; i = i->next)
        for (t_list *j = i->next; j; j = j->next)
            if (cmp(i->data, j->data)) {
                void *tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }

    return lst;
}
