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
	
	cout << "첫 번째 사각형의 면적=" << result1 << endl;
	cout << "두 번째 사각형의 면적=" << result2 << endl;
} 
