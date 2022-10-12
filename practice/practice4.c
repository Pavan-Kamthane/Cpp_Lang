//Q1. Write a program to print multiplication table of a given number n.

//ANSWER --->>

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     printf("Enter any number\n");
//     scanf("%d",&n);
//     for ( i = 1; i<=10 ; i++)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//     }
    
// return 0;
// }

// ---------------------------------------------------------------------------------------------------------

//Q2. Write a program to print multiplication table of 10 in reverse order

//ANSWER--->>

// #include<stdio.h>
// int main()
// {
//     int i,n=10;
//     for(i=n; i>=1; i--){

//     printf("%d X %d=%d\n",n,i,n*i);    
//     }
// return 0;
// }

//---------------------------------------------------------------------------------------------------------

//Q5. Write a program to sum first 10 natural numbers using while loop.

// ANSWER--->>

// #include<stdio.h>
// int main()
// {
//     int i=1, sum=0,n=10;
//     while(i<=n)
//     {
//         sum=sum+i;
//         i++;
//     }
//         printf("The value of sum (1-10) is = %d\n",sum);
// return 0;
// }

//---------------------------------------------------------------------------------------------------------


//Q6. Write a program to impliment program 5 using for and do-while loop.

//ANSWER--->>

// #include<stdio.h>
// int main()
// {
//     int i,sum=0,n=10;
//     for(i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
// printf("The value of sum (1-10) is = %d",sum);
// return 0;
// }

//---------------------------------------------------------------------------------------------------------


//Q7. Write a program to calculate the sum of the numbers occurinng in the multiplication table of 8. 
// Consider (8x1 to 8x10)

//ANSWER--->>

// #include<stdio.h>
// int main()
// {
//     int i,n,sum=0;
//     printf("Enter any number\n");
//     scanf("%d",&n);
//     for ( i = 1; i<=10 ; i++)
//     {
//         printf("%d X %d = %d\n",n,i,n*i);
//         sum=sum+n*i;
//     }
//     printf(" the sum of the numbers occurinng in the multiplication table of %d is %d",n,sum);
    
// return 0;
// }

//---------------------------------------------------------------------------------------------------------

//Q8. Write a program to find the factorial of  given number using a for loop.

//ANSWER--->> 
// #include<stdio.h>
// int main()
// {
//     int i,n,fact=1;
// printf("Enter any number\n");
// scanf("%d",&n);
// for ( i = n; i > 0; i--)
// {
//    fact=fact*i;
// }
// printf("Factorial of %d is = %d",n,fact);
// return 0;
// }

//---------------------------------------------------------------------------------------------------------

//Q9. Repeat 10 using while loop.

//ANSWER--->>
// #include<stdio.h>
// int main()
// {
//     int i=1,n,fact=1;
//     printf("Enter any number\n");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         i++;
//         fact=fact*i;
//     }
//     printf("Factorial of %d is %d\n",n,fact);
// return 0;
// }

//---------------------------------------------------------------------------------------------------------

//Q10. Write a program to check whether a given number is prime or not using loops.
    // Prime Numbers = A prime number (or a prime) is a natural number greater than 1 that is not a product of two smaller natural numbers. 
    // Disclaimer: This is not the best method to solve this problem

    //ANSWER--->> 


#include <stdio.h>
int main()
{
 
   int n, i, count = 0;
 
    printf("Enter number to check prime number or not\n");
    scanf("%d",&n);
 
    for(i=2; i<=n/2; ++i)
    {
        // check for non prime number
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
 
    if (count==0)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);
 }
