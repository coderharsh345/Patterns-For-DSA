#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter the numer: ";
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
           cout<< "It is Not Prime Number"<< endl;
           break;
        }
        else{
            cout<< "Is a Prime Nunber"<< endl;
            break;
        }
    }
}