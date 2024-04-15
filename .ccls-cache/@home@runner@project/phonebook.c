#include <cs50.h>
#include <stdio.h>
#include <string.h>
//strcmp > for string companre

// 3 is a bad style practically since it is a magic number, could have been taken by user or sizeof
// smelly code since names are seperated from numbers
int main(void)
{
    string names[] = {"Teo", "David", "John"};
    string numbers[] = {"+43-0755", "+1-9988", "+1-0101"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0 )
        {
            printf("Found %s \n", numbers[i]);
            return 0;
        }

    }
    printf("Not Found \n");

}
