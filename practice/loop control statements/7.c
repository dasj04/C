#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    int product;
    
    for (int i=1; i<=10; i++){
        product=a*i;
        printf("%d\n",product);
        }
    
    return 0;
}

/*Also we can solve it by:
#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for (int i=1; i<=10; i++){
        printf("%d\n",a*i);
        }
    
    return 0;
} */

