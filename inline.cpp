#include<iostream>
using namespace std;

inline float area(float x, float y) 
{
	return x*y;
}

int main()
{
	float result1, result2;
	
	result1 = area(9.2,4.5);
	result2 = area(2.5, 12.5);
	
	cout << "ù ��° �簢���� ����=" << result1 << endl;
	cout << "�� ��° �簢���� ����=" << result2 << endl;
} 
