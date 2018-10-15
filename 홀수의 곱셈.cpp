#include<iostream>
using namespace std;

int main()
{
	int x=0,y=0,result=1;
	
	while(x<4)
	{
		x=y++;
		result*=(x+y); 
	}
	cout << "1*(1+2)*(2+3)*(3+4)*(4+5)=" << result << endl;
	
	x=0,y=1,result=1;
	
	while(x<=4)
	{
		result*=(x+++y++);
	}
	cout << "1*(1+2)*(2+3)*(3+4)*(4+5)=" << result;
	
}
