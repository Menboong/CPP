#include<iostream>
using namespace std;

class person
{
	int man, woman, sum;
	public:
		void itset(int a, int b);
		int itsum();
};

void person :: itset(int a, int b)
{
	man = a;
	woman = b;
}

int person :: itsum()	
{
	sum = man + woman;
	return sum;
}

int main(){
	person p1, p2;
	int c = 2, d = 6;
	
	p1.itset(c,d);
	p2.itset(3,6);
	
	cout << "p1결과 " << p1.itsum();	cout << endl;
	cout << "p2결과 " << p2.itsum();	cout << endl;
}
