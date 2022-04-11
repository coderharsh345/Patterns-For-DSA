#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter the number: ";

    cin>> n;

    int i=1;
    while(i<=n){
        char ch='A'+n-i;
        int j=1;
        while(j<=i){
            cout<< ch<< " ";
            j=j+1;
            ch=ch+1;
        }
        cout<< endl;
        i=i+1;
    }
}