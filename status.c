#include <stdio.h>
#include <cs50.h>

int main(void){
    bool truthtable[4] = {false, true, true, false};
    int size = sizeof(truthtable) / sizeof(truthtable[0]);

    for (int i=0; i<size ; i++)
    {
        printf("truthtable[%i]: %i \n",i, truthtable[i]);
    }

}