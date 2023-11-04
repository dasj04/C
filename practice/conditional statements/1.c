#include<stdio.h>
main() {
int a;
printf("Enter the age: ");
scanf("%d",&a);
a>=18? printf("eligible for voting\n") :printf("Not eligible for voting\n");
}