#include<iostream>

int main()
{
	enum{red1,blue1,green1,white1}; // 0,1,2,3
	enum{red2=2,blue2,green2,white2}; //2,3,4,5
	enum{red3=1,blue3,green3,white3=7}; //1,2,3,7
	enum{red4=10,blue4,green4=50,white4}; //10,11,50,51
}
