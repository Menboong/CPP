#include<iostream>
using namespace std;

int main()
{
	int i,sum=0;
	
	for(i=1;i<11;i++)
	{
		if(i%3==0) continue;
		sum+=i;
	}
	
	cout << "sum=" << sum;
}
