// getting minimum number in an array -->>
#include <bits/stdc++.h>
using namespace std;
int min_arr(int num[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i] > INT_MAX){
            min = num[i];
        // cout<<num[i];
        }
    }
    return min;

}

int main()
{
    cout<<"inter size of arr : ";
    int size; cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<endl<<"Minumum is : "<<min_arr(num,size)<<endl;
    return 0;
}
