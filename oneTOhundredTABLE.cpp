#include<iostream>
using namespace std;
int main(){
	int i,j,res;
	
	for(i=1;i<=100;i++){
		for(j=1;j<=10;j++){
			res = i*j;
			cout<<res<<" ";
		}
		cout<<"\n";
	}
}
