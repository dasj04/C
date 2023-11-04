#include<stdio.h>
#include<math.h>
int main() {
    int a;
    printf("Enter the side: ");
    scanf("%d",&a);
    int n;
    n=pow(a,2);
    printf("%d units is the area of the square.\n",n);
    return 0;
} 