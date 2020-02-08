#include<iostream>
using namespace std;
//斐波那契数列
//子问题，第三项为第一项加第二项，第N项为A[N-1]+A[N-2]
int Fbs(int n)
{ 
if(n==2||n==1)
return 1;
else return Fbs(n-1)+Fbs(n-2);//不可以用赋值语句，用return 
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
