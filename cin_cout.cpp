#include<iostream>
using namespace std;

#define SizeName 10
const int SizeAdd = 20;

int main()
{
	char name[SizeName];
	char address[SizeAdd];
	
	cout<<"�̸�: ";
	cin>>name;
	cout<<"�ּ�: ";
	cin>>address;
	
	cout<<"�̸��� "<<name<<"�̰� �ּҴ� "<<address<<"�Դϴ�"; 
}
