#include<iostream>
using namespace std;

class A
{
public:
	int x;
	int y;
	A()
	{
		cout<<"A Con"<<endl;
		x=10;
		y=20;
	}
	void assign(int a,int b)
	{
		cout<<"A assign"<<endl;
		x=a;
		y=b;
	}
	void display()
	{
		cout<<"A display"<<endl;
		cout<<x<<" "<<y<<endl;
	}
};

class B:public A
{
public:
	int p;
	int q;
	B()
	{
		cout<<"B cons"<<endl;
		p=122;
		q=222;
	}
	void assign(int a,int b)
	{
		cout<<"B assign"<<endl;
		p=a;
		q=b;
	}
	void display()
	{
		cout<<"B display"<<endl;
		cout<<p<<" "<<q<<endl;
	}
};

int main()
{
	A obj1;
	B obj2;

	A* pobj1=&obj1;
	A* pobj2=&obj2;

//	B* pobj3=&obj1;
	B* pobj4=&obj2;

	pobj2->assign(123,123);
	pobj2->display();

	pobj4->assign(11,22);
	pobj4->display();
	
}