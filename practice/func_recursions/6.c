#include<stdio.h>
void priceCalc(float value);
int main(){
    float value;
    printf("Enter the price: ");
    scanf("%f",&value);
    priceCalc(value);
    return 0;
} 
void priceCalc(float value){
    value=value+(0.18*value);
    printf("The Net Price is: Rs.%0.2f\n",value);
}