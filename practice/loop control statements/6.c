#include<stdio.h>
int main() {
    int a;
    printf("enter a value: ");
    scanf("%d",&a);
    
    int sum=0;
    for(int i=1;i<=a;i++){
    sum=sum+i;
    }
printf("sum is %d\n",sum);
return 0;
}