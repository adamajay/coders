#include<stdio.h>
int main()
{
    int num,res=0,chk,c;
    printf("Enter a number \n");
    scanf("%d",&num);
    chk=num;
    while (num>0)
    {
        c = num % 10;
        res = res*10+c;
        num = num/10;
    }
    if (chk == res)
        printf("\n The entered number is PALINDROME.");
    else
        printf ("\n The entered number is NOT PALINDROME.");
}

