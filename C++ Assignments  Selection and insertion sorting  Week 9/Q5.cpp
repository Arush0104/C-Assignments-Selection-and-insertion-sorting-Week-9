#include<iostream>
using namespace std;
int main(){
    string s = "physicswallah";
    int m = s.length();
    for(int i =0; i<m-1;i++){
        for(int j =0;j<m-1;j++){
            if(s[j]>s[j+1]) swap(s[j],s[j+1]);
        }
    }
    for(int i =0;i<m;i++){
        cout<<s[i]<<" ";
    }

}