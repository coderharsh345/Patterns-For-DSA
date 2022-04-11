#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum=0;
    int num=2;

    while(num<=n){
        if(num%2==0){
            sum=sum+num;
            num=num+2;
        } 
    }
    cout<<"Sum of all even number: "<< sum<< endl;
}