#include<stdio.h>
int main() {
    for(int a=5;a<=50;a++){
    if(a%2==0){continue;}
    printf("%d\n",a);
    } 
    return 0;
}