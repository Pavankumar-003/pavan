#include<stdio.h>

struct emp
{
	int ID;
	int Sec;
};
void fun(struct emp []);
void main()
{
	struct emp X[3]={{1,10},{2,20},{3,30}};

	fun(X);
}
void fun(struct emp A[])
{
	int i;
	for(i=0;i<3;i++)
		printf("%d %d\n",A[i].ID,A[i].Sec);

}