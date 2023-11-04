#include<stdio.h>
int main() {
    int a;
    printf("Enter marks: ");
    scanf("%d",&a);
    if(a>=90 && a<=100){printf("A+\n");}
    else if(a>=70 && a<90){printf("A\n");}
    else if(a>=30 && a<70){printf("B\n");}
    else if(a<30 && a==0){printf("C\n");}
    else{printf("\"Invalid Score\"\n");}
    return 0;
}