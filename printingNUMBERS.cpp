#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"stars printing from here -->\n";
	
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			if(j>=0 && j<=i){
				cout<<i+1;
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<"\n";
	}
}
