//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int x;
//	int y;
//	int *ptr;
//
//	A()
//	{
//		x=10;
//		y=20;
//		ptr=&x;
//	}
//	void assign(int a,int b)
//	{
//		x=a;
//		y=b;
//		*ptr=a+b;
//	}
//	void display()
//	{
//		cout<<x<<" "<<y<<" "<<*ptr<<" "<<ptr<<endl;
//	}
//};
//int main()
//{
//	A obj;
//	A *pobj;
//
//	pobj=&obj;
//	obj.x=1;
//	obj.y=2;
//	*(obj.ptr)=3;
//
//	obj.display();
//	
//	pobj->x=12;
//	pobj->y=23;
//	*(pobj->ptr)=34;
//	
//	pobj->display();
//
//	pobj->ptr=&(pobj->y);
//
//	pobj->display();
//}