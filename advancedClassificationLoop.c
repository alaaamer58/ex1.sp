#include <stdio.h>
#include "NumClass.h"
#include <stdbool.h>
#include <math.h>
int isArmstrong (int x) 
{
    double numDigit=0;
    for (int i = x; i > 0; i/=10)
    {
        numDigit++;
    }
    int sum = 0;
    double i = x;
    for (; i > 0; i/=10)
    {
        sum += pow(i,numDigit);
    }
    if (sum == x)
    {
        return 1;
    }
    return 0;
}
int isPalindrome(int num)
{
    int rev = 0;
    for (int i = num; i >0; i/=10)
    {
        int d = i%10;
        rev = rev*10+d;
    }
    if (rev==num)
    {
        return 1;
    }
    return 0;
}