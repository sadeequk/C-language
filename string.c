#include<iostream>
#include<string>
using namespace std;

string onesname(int ones);
string teenname(int teen);
string tensname(int tens);
string intname(int number);

int main()
{
	int input;
	
	cout<<"input number:";
	cin>>input;
	cout<<"output\t:";
	cout<<""<<intname(input)<<endl;
	cout<<""<<endl;
	return0;
}

string onesname(int ones)
{
	if(ones==0)return"zero";
	if(ones==1)return"one";
	if(ones==2)return"two";
	if(ones==3)return"three";
	if(ones==4)return"four";
	if(ones==5)return"five";
	if(ones==6)return"six";
	if(ones==7)return"seven";
	if(ones==8)return"eight";
	if(ones==9)return"nine";
	return0;
}
string teenname(int teen)
{
	if(teen==10)return"teen";
	if(teen==11)return"eleven";
	if(teen==12)return"twelve";
	if(teen==13)return"thirteen";
	if(teen==14)return"fourteen";
	if(teen==15)return"fifteen";
	if(teen==16)return"sixteen";
	if(teen==17)return"seventeen";
	if(teen==18)return"eighteen";
	if(teen==19)return"ninteen";
	return0;
}
	
	
	
	
}

