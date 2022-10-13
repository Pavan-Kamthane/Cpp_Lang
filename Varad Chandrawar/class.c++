#include<iostream>
using namespace std;
//int main()
{
class person 
{
    int Pid;
    string Pname;
    int Page;
    string Pcity;
    public:
    void setperson (int Pid, string Pname, int Page, string Pcity)
    {
        this -> Pid=Pid;
        this -> Pname=Pname; 
        this -> Page=Page;
        this -> Pcity=Pcity;
    }
void show()
{
    cout<<"Person Info"<<endl;
    cout<<"Person Id"<<endl;
    cout<<"Person Name"<<endl;
    cout<<"Person City"<<endl;
}
}
int main()
{
    Person P1,P2;
    P1.setperson(101,"Varad",20,"Nanded");
    P2.setperson(202,"gopal",25,"Nanded");
    cout<<"on object P1"=><<endl;
    P1.show();
    cout<<"on object P2"=><<endl;
    P2.show();
    return 0;
}
}