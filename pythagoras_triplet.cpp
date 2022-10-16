#include<iostream>
using namespace std;
struct gret{
   
    int a,b,c;
};

gret greatest(int a, int b, int c){
    gret num;
    if(b>a&&b>c){
        num.a=b;
        num.b=a;
        num.c=c;
        return num;
    }
    else if(c>a&&c>b){
        num.a=c;
        num.b=b;
        num.c=a;

        return num;
    }
    else 
    return {a,b,c};


}

bool pythagoras(int num1,int num2,int num3){
    gret s;
    s=greatest(num1,num2,num3);
    if (((s.a) * (s.a))==((s.b) * (s.b) + (s.c) * (s.c))){
        cout<<endl;
        return 1;
    }
    else
    return 0;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(pythagoras(a,b,c)){
        cout<<a<<","<<b<<","<<c<<" are pythagoras triplet.";
    }
    else{
        cout<<a<<","<<b<<","<<c<<" are not pythagoras triplet.";
    }
        

}
