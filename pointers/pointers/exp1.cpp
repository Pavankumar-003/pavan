//#include<iostream>
//using namespace std;
//
//void fun(int a,int b)
//{
//	a=a+10;
//	b=b+10;
//}
//
//void check(int *a,int *b)
//{
//	*a=*a+10;
//	*b=*b+10;
//}
//
//void ref(int &a,int &b)
//{
//	a=a+10; 
//	b=b+10;
//}
//
//void fun(char a,char b)
//{
//	a=a+10;
//	b=b+10;
//}
//
//void check(char *a,char *b)
//{
//	*a=*a+10;
//	*b=*b+10;
//}
//
//void ref(char &a,char &b)
//{
//	a=a+10; 
//	b=b+10;
//}
//
//int main()
//{
//	int x,y;
//	x=10;
//	y=20;
//
//	char ch1,ch2;
//	ch1='a';
//	ch2='b';
//
//	fun(x,y);
//	cout<<x<<" "<<y<<endl;
//
//	ref(x,y);
//	cout<<x<<" "<<y<<endl;
//
//	check(&x,&y);
//	cout<<x<<" "<<y<<endl;
//
//	fun(ch1,ch2);
//	cout<<ch1<<" "<<ch2<<endl;
//
//	ref(ch1,ch2);
//	cout<<ch1<<" "<<ch2<<endl;
//
//	check(&ch1,&ch2);
//	cout<<ch2<<" "<<ch2<<endl;
//
//
//}