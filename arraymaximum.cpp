//getting maximum number in an array -->
#include <bits/stdc++.h>
using namespace std;
int maxarr(int num[],int n){
    int max = INT_MIN;
    
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}
int main()
{
   int size;
   cin>>size;
   
   int num[100];
   
   for(int i=0;i<size;i++){
       cin>>num[i];
   }
   cout<<"maximum is : "<<maxarr(num,size)<<endl;

    return 0;
}
