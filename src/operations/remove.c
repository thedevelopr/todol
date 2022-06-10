#include <stdio.h>
#include <string.h>
#include "operations.h"
#include "../tools.h"
#include "../print.h"

void remove_task(linklist tasks, int *has_changed)
{
    int id;

    if (tasks->count > 0)
    {
        id = choose_number("task number: ", 1, tasks->count);
        if (id != -1)
        {
            ldel(tasks, id - 1);
            // task *t = lget(tasks, id - 1);
            // t->flag = TASK_REMOVED;
            *has_changed = 1;
        }
        else
        {
            printf("Abort.\n\n");
        }
    }
    else
    {
        printf("List is empty...");
    }
}
