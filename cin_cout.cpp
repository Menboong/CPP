#include<iostream>
using namespace std;

#define SizeName 10
const int SizeAdd = 20;

int main()
{
	char name[SizeName];
	char address[SizeAdd];
	
	cout<<"이름: ";
	cin>>name;
	cout<<"주소: ";
	cin>>address;
	
	cout<<"이름은 "<<name<<"이고 주소는 "<<address<<"입니다"; 
}
