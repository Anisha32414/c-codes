#include <stdio.h>
int main() 
{
    int n,i;
    int fact=1;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    if(n<0) 
    {
        printf("entered no. is not positive \n");
    } 
    else 
    {
        for(i=1;i<=n;i++) 
        {
            fact*=i;
        }
        printf("Factorial of %d = %d\n",n,fact);
    }
    return 0;
}
