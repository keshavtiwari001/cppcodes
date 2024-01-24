#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"please enter the numbers : ";
	cin>>n1>>n2;
	
	if((n1>0) && (n2>0)){
		cout<<"positive bruhh";
	}
	else if((n1>0) && (n2<0)){
		cout<<"a is positive and b is negative";
	}
	else if((n1<0) && (n2>0)){
		cout<<"a is negative and b is positive";
	}
	else if(n1==n2){
		cout<<"both are equal";
	}
	else{
		cout<<"both negative";
	}
}
