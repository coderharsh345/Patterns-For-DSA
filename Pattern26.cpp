#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;

    int i=1;
     
    while(i<=n){
        int j=1,space=i-1;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int count=i;
        while(j<=n-i+1){
            cout<< count;
            count=count+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }









}