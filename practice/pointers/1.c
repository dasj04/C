#include<stdio.h>
int main() {
   int x=5;
   int *ptr=&x;
   int **pptr=&ptr;

   printf("%d\n",**pptr);
   


    // printf("%d\n",x);
    // printf("%d\n",*ptr);

    
}