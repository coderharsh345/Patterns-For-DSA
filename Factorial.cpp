#include<iostream>
using namespace std;

int main(){
        int n;
        cout << "Enter the for factorial: ";
        cin >> n;
        int ans=1;
        int num=1;

        while(num<=n){
            ans=ans*num;
            num=num+1; 
        }
        cout<< "Factorial is: "<< ans<<endl;
        
}