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
	
	cout << "세 정수를 입력하세요:" << endl;
	cin >> n1 >> n2 >> n3;
	
	cout<< "최소값: " << sub(n1,n2,n3);
	
}
