#include <stdio.h>

int add();
void max(int x, int y);
void greet(void);
void myFunc(int *ptr);
void incrementAge(int agePointer);

typedef struct my_name {
    int a;
    char b;
} my_alias_t;

int main() {

  int age = 25;
  int *ptr = &age;

  printf("adress via pointer = %d\n", ptr);
  printf("adress via amp = %d\n", &age);
  incrementAge(*ptr);
  printf("age = %d\n", age);  

  int a[3];
  a[0] = 1;
  //int a = sizeof("a");
  printf("Size  = %d\n", sizeof(a));
  printf("a  = %d\n", a);

    
}


void incrementAge(int agePointer) {

  agePointer++;
  printf("%d \n", agePointer);
}

void myFunc(int *ptr) {
  ptr = ptr + 1;
  printf("a inside myFunc(): %d\n", ptr);
}

void greet(void) { puts("Hello Babe!"); }

void max(int x, int y) {
  if (x > y) {
    printf("x is greater than y");
  } else if (x < y) {
    printf("y is greater than x");
  } else {
    printf("x is equal to y");
  }
}

int add(int q, int w) { return q + w; }

/*
// POINTERS
# include <stdio.h>
# include <string.h>

int main(){

  int arr[4] = {1,2,3,4};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  char *ptr2 = &s[0];

  for(int i = 0; i < strlen(s); i++){
    *ptr2 = '#' ;
    ptr2 ++;

  }
  printf("The string is: %s", s);
  printf("\n");


  size_t size = sizeof(arr) / sizeof(arr[0]);

  printf("size division: %d \n", size);

  printf("Array:[%d,%d,%d]\n",arr[0],arr[1],arr[2]);

  int *ptr = &arr[0];
  //printf("pointer: %d \n", *ptr);


  for (int i = 0; i < 1; i++){
    printf("Array:[");
    for (int x = 0 ; x < 4 ; x++){
      printf("%x ", *ptr);
      ptr++;
    }
    printf("]\n");
  }


  for(int i = 0; i < 4; i++){
    printf("%3d ", arr[i]);

  }

}
*/