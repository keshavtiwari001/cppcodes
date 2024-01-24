#include<iostream>
using namespace std;
int main(){
//	int a,b,c,max;
//	cout<<"please enter : ";
//	cin>>a>>b>>c;
//	max = a;
//	if(b>max){
//		max = b;
//	}
//	if(c>max){
//		max = c;
//	}
//	cout<<max;


// NOTE = meake sure that all the operators have equalto sign;

 	int a,b,c;
 	cout<<"enter three numbers : ";
 	cin>>a>>b>>c;
 	
 	if(a>b && a>c){
 		cout<<a<<" is largest : a";
	 }
	else if(b>a && b>c){
		cout<<b<<" is largest: b";
	}
	else{
		cout<<c<<" is largest: c";
	}
}
