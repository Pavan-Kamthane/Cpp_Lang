#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float d,root1,root2,rroot,iroot;
    printf("enter a,b,c:-");
    scanf("%d%d%d",&a,&b,&c);
    d=pow(b,2)-(4*a*c);
    if (d>0)
    {
    printf("real roots\n");
    root1=-b+sqrt(d)/(2*a);
    root2=-b-sqrt(d)/(2*a);
    printf("the roots are: %.2f and %.2f",root1,root2);

    }
    else{
        printf("imaginary roots\n");
        rroot=-b/(2*a);
        iroot=sqrt(d)/(2*a);
        printf("the roots are: %.2f + %.2fi\n and %.2f - %.2fi",rroot,iroot,rroot,iroot);
        

    }
    return 0;
}
