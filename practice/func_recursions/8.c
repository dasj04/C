#include<stdio.h>
void main() {
    int a=22;
    int *ptr= &a;

    printf("%u\n",&a);
    printf("%u\n",ptr);

    printf("%d\n",&a);
    printf("%d\n",*ptr);
    printf("%d\n",*(&a));

}