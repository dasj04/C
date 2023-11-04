#include <stdio.h>

void Namaste();
void Bonjour();

int main() {
    char ch;
    printf("Enter i for Indian & f for Frenchmen: ");
    scanf("%c",&ch);

    if(ch=='i'){Namaste();}
    else if(ch=='f') {Bonjour();}
    else {printf("Hello");}
    return 0;
}
void Namaste() {printf("Namaste!\n");}
void Bonjour() {printf("Bonjour!\n");}