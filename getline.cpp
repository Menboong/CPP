#include<iostream>
using namespace std;

int main()
{
	const int Length = 30;
	char name[Length];
	char address[Length];
	
	cout << "이름: ";
	cin.getline(name,Length);
	
	cout << "주소: ";
	cin.getline(address,Length);
	
	cout << "이름은 " << name << "이고요" << endl;
	cout << "주소는 " << address << "입니다." << endl; 
}
