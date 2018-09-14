#include<iostream>
using namespace std;

int main()
{
	int a1[4];
	int a2[3] = {1,2,3};
	int b1[2][3];
	int b2[2][2] = {{1,2},{3,4}};
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"b2["<<i<<"]"<<"["<<j<<"] = "<<b2[i][j]<<endl;
		}
	}
}
