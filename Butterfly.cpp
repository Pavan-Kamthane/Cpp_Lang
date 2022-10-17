#include<stdio.h>
int main()
{
    int a,j,n;
	printf("Enter number of rows/size: ");
	scanf("%d",&n);
    for (a=1; a<=n; a++)
    {
        for (j=1; j<=(2*n); j++)
        {

            if (a<j) 
            printf(" ");
            else
             printf("*");
             
            if (a<=((2*n)-j))
             printf(" ");
            else
             printf("*");
        }
        printf("\n");
    }
     
    for (a=1; a<=n; a++)
    {
        for (j=1;j<=(2*n);j++)
        {
            if (a>(n-a+1))
             printf(" ");
            else
             printf("*");
                 

            if ((a+n)>j)
             printf(" ");
            else
             printf("*");
        }
        printf("\n");
    }
	return 0;
}
