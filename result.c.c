#include<iostream.h>
using namespace std;

main()
{
	int a,b,result,op;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	 cout<<"enter operation  you want"<<endl;
	 cout<<"1)addition"<<endl;
	 cout<<"2)subtraction"<<endl;
	 cout<<"3)multiplication"<<endl;
	  cin>>op;
	  switch(op)
	  {
	  	case1:
	  		result=a+b;
	  		break;
	  		case2:
	  			result=a-b;
	  			break;
	  			case3:
	  				result=a*b;
	  				break;
	  				default:
	  					cout<<"invalid input";
	  }
	  cout<<"result is"<<result;
	  return 0;
}
