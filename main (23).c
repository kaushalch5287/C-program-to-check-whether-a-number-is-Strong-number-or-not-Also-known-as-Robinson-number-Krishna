/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
 int i, originalNum, num, lastDigit, sum;
 long fact;
printf("Enter any number to check Strong number: ");
 scanf("%d", &num);
 originalNum = num;
sum = 0;
 while(num > 0)
 {
 lastDigit = num % 10;
 fact = 1;
 for(i=1; i<=lastDigit; i++)
 {
 fact = fact * i;
 }
 sum = sum + fact;
 num = num / 10;
 }
 if(sum == originalNum)
 {
 printf("%d is STRONG NUMBER", originalNum);
 }
 else
 {
 printf("%d is NOT STRONG NUMBER", originalNum);
 }
return 0;
}
