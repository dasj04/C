#include<stdio.h>

//function declration
void printHello();
void printOla();
void printAdios();

//function call
int main() {
    printOla();
    printHello();
    
    printAdios();

}

//function definition
void printAdios() {printf("Adios!\n");}
void printHello() {printf("Hello!\n");}
void printOla() {printf("Ola!\n");}
