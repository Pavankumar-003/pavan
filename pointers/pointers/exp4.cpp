//#include<iostream>
//using namespace std;
//
//class A
//{
//public:
//	int x;
//	int y;
//	A()
//	{
//		x=10;
//		y=20;
//	}
//	void assign(int a,int b)
//	{
//		x=a;
//		y=b;
//	}
//	void display()
//	{
//		cout<<x<<" "<<y<<endl;
//	}
//};
//
//A* fun(A* pobj1)
//{
//	A* pobj2=pobj1;
//	pobj1->x=123;
//	pobj1->y=321;
//	return pobj2;
//}
//int main()
//{
//	A obj;
//	A* pobj=&obj;
//	obj.assign(11,22);
//	pobj=fun(pobj);
//
//	pobj->display();
//}