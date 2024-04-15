#include <cs50.h>
#include <stdio.h>
#include <string.h>
//strcmp > for string companre


typedef struct
{
    string name;
    string number;

} person;
// person is a new data type


int main(void)
{
    person people[3];

    people[0].name = "Teo";
    people[0].number = "+43-0755";
    //name and number is an attribute of data type

    people[1].name = "David";
    people[1].number = "+1-0758";

    people[2].name = "John";
    people[2].number = "+1-0101";


    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0 )
        {
            printf("Found %s \n", people[i].number);
            return 0;
        }

    }
    printf("Not Found \n");

}
