#include<stdio.h>
#include<stdbool.h>
#include"NumClass.h"
#include "basicClassificaation.c"
#include "advancedClassificationLoop.c"
void main ()
{
    int tru =1;
    int min , max;
    printf("please enter the first number:");
    scanf("%d",&min);
    printf("please enter the second number:");
    scanf("%d", &max);
    printf("The Armstrong numbers are: ");
    for (int i = min; i <= max; i++)
    {
        if (isArmstrong(i)==tru){
            printf("%d",i);
            printf(" ");
        }
    }
    printf("\n");
    printf("The Palindromes are:");
    for (int i = min; i <= max; i++)
    {
        if (isPalindrome(i)==tru){
            printf("%d",i);
            printf(" ");
        }
    }
     printf("\n");
    printf("The Prime numbers are:");
    for (int i = min; i <= max; i++)
    {
        if (isPrime(i)==tru){
            printf("%d",i);
            printf(" ");
        }
    }
     printf("\n");
    printf("the strong numbers is :");
    for (int i = min; i <= max; i++)
    {
        if (isStrong(i)==tru){
            printf("%d",i);
            printf(" ");
        }
    }
}