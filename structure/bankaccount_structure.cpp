#include<stdio.h>
#include<string.h>
 struct sbt
    {
        int acno;
       char name1[20];
        char address[50];
        int acbal;
    };
int main(){
    int n,rs;
    char name[20],add[50];
    struct sbt customer1;
    printf("enter a/c no:-");
    scanf("%d",&customer1.acno);
     printf("enter name:-");
    scanf("%s",customer1.name1);
   //gets(customer1.name1);
     printf("enter address:-");
     gets(customer1.address);
   // scanf("%s",&customer1.address);
    printf("enter a/c bal:-");
    scanf("%d",&customer1.acbal);

    if (customer1.acbal<500 || customer1.acbal>100000)
    {
        printf("not accepted\n");
    }
    else{
    printf("you a/c no is:-%d\n",customer1.acno);
    
    printf("you name is :-%s",strcpy(name,customer1.name1));
    printf("you address is :-%s\n",customer1.address);
    printf("you a/c bal is %d\n",customer1.acbal);
    printf("press 1 for debit and 2 for credit");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
    printf("rupees you want to debit:-");
    scanf("%d",&rs);
    printf("%d rupees debited\n",rs);
    printf("remaining balance is %d",customer1.acbal-rs);
        break;
     case 2:
    printf("rupees you want to credit:-");
    scanf("%d",&rs);
    printf("%d rupees credited\n",rs);
    printf("remaining balance is %d",customer1.acbal+rs);
    break;
    
    default:
    printf("invalid input");
        break;
    }
    }

return 0 ;
}
