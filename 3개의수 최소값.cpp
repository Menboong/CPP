#include<iostream>
using namespace std;

int sub(int a, int b, int c)
{
	int min;
	
	if(a<b) min = a;
	else min = b;
	
	if(min<c) min = min;
	else min = c;
	
	return min;
}

int main()
{
	int n1,n2,n3;
	
	cout << "�� ������ �Է��ϼ���:" << endl;
	cin >> n1 >> n2 >> n3;
	
	cout<< "�ּҰ�: " << sub(n1,n2,n3);
	
}
