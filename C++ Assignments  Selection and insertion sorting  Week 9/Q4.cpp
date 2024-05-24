#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,2,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    //IS
    for(int i=0;i<n;i++){
        int j =i;
        while(j>=1&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    int x = 0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=arr[i];
    }
    for(int i = n-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    int y = 0;
    for(int i=0;i<n;i++){
        y*=10;
        y+=arr[i];
    }
    cout<<x+y;
}