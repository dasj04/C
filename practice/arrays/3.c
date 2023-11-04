#include<stdio.h>
int main() {
    int x=2;
    int *ptr=&x;
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    
  
    return 0;

}