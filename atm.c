//program to implement sample ATM applications.print the following options and perfom the user selected operation
/*1.deposit
2.withdrawal
3.blance check
4.pinchange*/
#include <stdio.h>
int main()
{
    int pin=2003;
    int entered_pin;
    float bal=500;
    int ch;
    float amt=0;
    printf("1.Deposit\n2.Withdrawal\n3.Balance check:\n4.Pin change");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("Enter pin:");
               scanf("%d",&entered_pin);
               if(pin==entered_pin)
               {
                 printf("Enter amount:");
                 scanf("%f",&amt);
                     if(amt>0)
                     {
                         bal=bal+amt;
                         printf("your amount is deposited successfully");
                 }
                     else{
                    printf("Check your entered amount");
                    }
               }
               else
               {
                printf("invalid pin.");
               }
               break;
        case 2:printf("Enter pin:");
               scanf("%d",&entered_pin);
               if(pin==entered_pin)
               {
                printf("Enter amount:");
                scanf("%f",&amt);
                if(amt>0)
                {
                    bal=bal+amt;
                    printf("your amount is withdrawed successfully");
                }
                else{
     +               printf("Check your entered amount");
                }
               }
               else
               {
                printf("invalid pin.");
               }
               break;
    }
    return 0;
}



