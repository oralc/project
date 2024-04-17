#include <cs50.h>
#include <stdio.h>

typedef uint8_t BYTE;

int main(void)
{
    string s = "HI!";
    printf("%p\n",s);
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);
    printf("%p\n",&s); // address of pointer

    char *st = "Hello" ;
    printf("%s \n", st);

  #include <cs50.h>
  #include <stdio.h>

  int main(void)
  {
      string s = "HI!";
      printf("%p\n",s);
      printf("%p\n",&s[0]);
      printf("%p\n",&s[1]);
      printf("%p\n",&s[2]);
      printf("%p\n",&s); // address of pointer

      char *st = "Hello" ;
      printf("%s \n", st);


  }

}
