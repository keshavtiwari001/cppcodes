#include<iostream>
using namespace std;
int main(){
	int i,j,k=1;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j>=0 && j<=i){
				cout<<k<<" ";
				k++;
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<"\n";
	}
}
