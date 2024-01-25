// how to reverse an array -->>
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    
    reverse(arr,5);
    
    printArr(arr,5);

    return 0;
}
