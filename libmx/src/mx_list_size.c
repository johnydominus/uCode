#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list *temp = list;
    int cntr = 0;

    if(temp == NULL)
        return cntr;
    else {
        while(temp->next != NULL) {
            ++cntr;
            temp = temp->next;
        }

        return ++cntr;
    }
}
