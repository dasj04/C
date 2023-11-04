#include<stdio.h>
int main(){
    float price[3];
    printf("Enter the price of first item: ");
    scanf("%f",&price[0]);
    printf("Enter the price of second item: ");
    scanf("%f",&price[1]);
    printf("Enter the price of third item: ");
    scanf("%f",&price[2]);

    float fp;
    fp=(price[0]+price[1]+price[2])*1.18;

    printf("The total price with GST added is: %0.2f\n",fp);
    return 0;


}