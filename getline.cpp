#include<iostream>
using namespace std;

int main()
{
	const int Length = 30;
	char name[Length];
	char address[Length];
	
	cout << "�̸�: ";
	cin.getline(name,Length);
	
	cout << "�ּ�: ";
	cin.getline(address,Length);
	
	cout << "�̸��� " << name << "�̰��" << endl;
	cout << "�ּҴ� " << address << "�Դϴ�." << endl; 
}
