#include<stdio.h>
#include<stdlib.h>

int main(){
float height = 2.75;
double bankBalance = 2000.50;
char phoneNumber[15] = "0798567567";
    
    printf("Height: %.2f meters\n", height);
    printf("Bank balance: Ksh. %.2lf\n", bankBalance);
    printf("phone Number: %s\n", phoneNumber);
    
    return 0;
}