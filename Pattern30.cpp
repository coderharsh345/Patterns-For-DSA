#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>> n;

    int i=1;
    int value=n*n;
    while(i<=n){
        int j=1;
        
        while(j<=n){
            cout<<value<<" ";
            value=value-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }



}