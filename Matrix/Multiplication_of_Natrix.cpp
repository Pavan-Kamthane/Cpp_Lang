#include<stdio.h>
int main(){
    int a1[2][3]={1,2,3,
                  4,5,6};
    int a2[3][2]={7,8,
                  9,10,
                  11,12};
    int a3[2][2],sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum=sum+(a1[i][k]*a2[k][j]);
                a3[i][j]=sum;

            }
            
        }
        
    }
    

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            
            printf("%d ",a3[i][j]);
        }
        printf("\n");
        
    }
    
    



    return 0;
}
