#include<iostream>
using namespace std;
//쳲���������
//�����⣬������Ϊ��һ��ӵڶ����N��ΪA[N-1]+A[N-2]
int Fbs(int n)
{ 
if(n==2||n==1)
return 1;
else return Fbs(n-1)+Fbs(n-2);//�������ø�ֵ��䣬��return 
 } 
 int main ()
 {	int num=0,n=0;
 	cin>>num;
 	for(int i=0;i<num;++i)
 	{
 	cin>>n;
 	cout<<"The fb number is: "<<Fbs(n)<<endl;
	}
	return 0;
 }
