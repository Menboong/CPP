#include<iostream>
using namespace std;

int main()
{
	unsigned short int Day;
	enum Week {Mon,Tue,Wed,Thu,Fri,Sat,Sun};
	Week Weekend;
	cout << "Week: Mon=0,Tue=1,Wed=2 ...Sun=6\n";
	cout << "주말은: ";
	cin >> Day;
	Weekend = (Week)Day;
	if((Weekend == Sat) || (Weekend == Sun)) cout << "주말입니다."<< endl;
	else cout << "주말이아닙니다." ;
}
