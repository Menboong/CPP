#include<iostream>
using namespace std;

void no_reset()
{
	int x = 0;
	static int y = 0;
	
	x++;
	y++;
	
	cout << "x��: " << x << "  y��: " << y << endl;
}

int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		no_reset();
	}
}
