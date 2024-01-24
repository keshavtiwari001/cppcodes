#include<iostream>
using namespace std;
int main(){
	int n,i,j,flag;
	cout<<"Enter number : ";
	cin>>n;
	
	for(i=2;i<=n;i++){
		for(j=2;j<i;j++){
			flag=0;
			if(i%j==0){
				flag = 1;
				break;
			}
		}
		
		if(flag==0){
			cout<<i<<" ";
		}
	}
}
