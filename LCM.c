#include<stdio.h>
int find_lcm(int, int);
int main()
{
    int a, b, lcm;
    printf("Input\nInput first number:");
    scanf("%d", &a);
    printf("Input second number:");
    scanf("%d", &b);
    lcm = find_lcm(a,b);
    printf("Output\nLCM of %d and %d is: %d", a, b, lcm);
    return 0;
}
int find_lcm(int a, int b)
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
