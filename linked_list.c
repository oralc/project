#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node; //synonum for structure


int main(int argc, char* argv[])
{
    node *list = NULL; //declare initial linked list

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]); //convert string to int
        //printf("%i\n", number);

        node *n = malloc(sizeof(node));
        if ( n == NULL)
        {
            //Free memory thus far
            return 1;
        }

        n->number = number;
        n->next = list;
        list = n; //update the list itself to point n

    }

    // print whole list
    node *ptr = list;
    while(ptr != NULL)
    {
        printf("%i \n", ptr->number);
        ptr = ptr->next;

    }



    return 0;
}
