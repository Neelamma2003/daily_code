#include<stdio.h>
int main()
{
    int pin=2003,enterd_pin;
    printf("Enter Your Pin\n");
    scanf("%d",&enterd_pin);
    if(pin==enterd_pin){
        printf("Valid Pin\n");
    }else{
        printf("Invalid Pin\n");
    }
    return 0;
}