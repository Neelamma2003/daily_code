//program to check if given character is vowel or not.(using else-if ladder)

#include <stdio.h>
int main()
{
char ch;
printf("Enter char:");
scanf("%c",&ch);

 if(ch=='A'||ch=='a')
 {
    printf("vowel");
 }
else if(ch=='E'||ch=='e')
{
    printf("vowel");
}
else if(ch=='I'||ch=='i')
{
    printf("vowel");
}
else if(ch=='O'||ch=='o')
{
    printf("vowel");
}
else if(ch=='U'||ch=='u')
{
    printf("vowel");
}
else
    {
    printf("consonant");
}
}