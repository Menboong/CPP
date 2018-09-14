#include <iostream>
using namespace std;

int main()
{
	int data = 100;
	int &rdata = data;
	
	cout<<data<<","<<rdata<<endl;
	rdata = 200;
	cout<<data<<","<<rdata<<endl;
	cout<<&data<<","<<&rdata<<endl;
	
}
