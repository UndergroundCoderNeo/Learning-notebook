#include<iostream>
#include<cmath>
using namespace std;
int Q[92][8],row[8],num=0;
void q(int i)
{
	i=0; 
	int j,k;
	if(i==8){
		for(int j=0;j<i;j++)
		Q[num][j]=row[j];
		num++;//�ҵ�һ�����ʹ�õĽ⣬��������Q�� 
		return;//�˴���Ҫ��return 
	}
	//�Ƚϵ�i�еĻʺ���֮ǰK�еĻʺ�λ���Ƿ��ͻ������Ĭ�ϲ���ͬһ��
	for(j=1;j<=8;++j){
			row[i]=j;
		for(k=0;k<i;++k){
			if(row[k]==j||abs(row[k]-j)==abs(k-i)) 
			break;
			}
		if(k==i)
			q(i+1);//i++��i+1���� ???
	}
}; 
int main(){
	int a,n;
	q(0);
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a;
		for(int j=0;j<8;++j){
			cout<<Q[a-1][j]<<endl;//a-1���� a 
		}
	}
	return 0;
}
