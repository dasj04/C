#include<stdio.h>
int main() {
    int a;
    printf("Enter a value: ");
    scanf("%d",&a);

    int n=0;
    while(n<=a){
        printf("%d\n",n);
        n++;
    } 
    return 0;

}