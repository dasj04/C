#include<stdio.h>
int main() {
    int a;
    printf("Enter Marks: ");
    scanf("%d",&a);
    if(a>=30){
        printf("Passed");
    }
    else {printf("Failed");}
    return 0;
}