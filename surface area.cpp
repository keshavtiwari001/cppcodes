#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
	float radius,sa;
	cout<<"Enter the value of radius : ";
	cin>>radius;
	
	sa = 4 * M_PI * pow(radius,2);
	
	cout<<"surface area is : "<<sa;
}
