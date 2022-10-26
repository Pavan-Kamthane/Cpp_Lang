//overriding of function
#include<iostream>
using namespace std;
class base{
	public:
    int x;
	int y;
		void data(){
			x=10;
			y=20;
			cout<<x<<endl;
			cout<<y<<endl;
		}
};
class derived:public base{
	public:
	void data(){
		x=20;
		y=30;
		cout<<x<<endl;
		cout<<y<<endl;
	}
};
int main(){
	base b;
	derived d;
	b.data();
	d.data();
	return 0;
}
