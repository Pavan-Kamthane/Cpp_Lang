#include<stdio.h>
int BinaryToDecimal(int n)
{
    if(n==0)
        return 0;
    else
        return (n% 10 + 2* BinaryToDecimal(n / 10));
}
int main()
{
    int n;
    printf("Enter the Binary Value:");
    scanf("%d",&n);
    printf("Decimal Value of Binary number is: %d",BinaryToDecimal(n));
  return(0)
}
