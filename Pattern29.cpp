#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j=j+1;
        }
        int space=(i-1)*2;
        while(space){
            cout<<"*"<<" ";
            space=space-1;
        }
        int no=n-i+1;
        while(no>=1){
            cout<<no<<" ";
            no=no-1;
        }
        cout<<endl;
        i=i+1;
       
    }
    
}