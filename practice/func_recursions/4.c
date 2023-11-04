#include<stdio.h>

int sum(int a, int b);

int main(){
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter an another number: ");
    scanf("%d",&b);

    int s=sum(a,b);
    printf("%d is the sum.\n",s);
}
int sum(int a, int b) {return a+b;}