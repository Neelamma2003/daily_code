#include <stdio.h>
int main()
{
    char ch,ch1;
    printf("Enter a choice:");
    scanf("%c",&ch);
    switch(ch)
    {
        case '1':
                 printf("enter character :");
                scanf("%c",&ch1);
                if(ch1>='A' && ch1<='Z')
                printf("%d",ch1);
               break;
        case '2':
               printf("enter character :");
               scanf("%c",&ch1);
               if(ch1>='a' && ch1<='z')
               printf("%d",ch1);
               break;
        case '3':
                printf("enter character :");
                scanf("%c",&ch1);
               if(ch1>='0' && ch1<='9')
               printf("%d",ch1);
               break;
        default:
               printf("invalid input");
               break;
    }
    return 0;
}