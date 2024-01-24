#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c,x1,x2,real,img,discriment;
	cout<<"enter number : ";
	cin>>a>>b>>c;
	
	discriment = b*b - 4*a*c;
	
	if(discriment > 0){
		x1 = (-b + sqrt(discriment)) / (2*a);
		x2 = (-b - sqrt(discriment)) / (2*a);
		cout<<"real and distinct roots : \n"<<x1<<"\n"<<x2;		
	}
	else if(discriment<0){
		real = (-b/(2*a));
		img = sqrt(-discriment)/(2*a);
		
		cout<<real<<"+ i"<<img;
		cout<<real<<"- i"<<img;
	}
		
	else{
		x1 = x2 = (-b/(2*a));
		cout<<"Real and equal roots : "<<x1;
	}	
	
	
}
