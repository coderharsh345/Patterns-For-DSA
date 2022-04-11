#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: "<< endl;
    cin >> n;


    if(n>0){
        cout<< "N is a Positive number" << endl;
    }

    else if(n==0){
        cout<< " N is a Zero" << endl;
    }

    else{
        cout<< " N is a Negative number" << endl;
    }
}