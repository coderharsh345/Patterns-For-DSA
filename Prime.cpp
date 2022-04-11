#include<iostream>
using namespace std;

int main(){
        int n;
        cout << "Enter the number n: ";
        cin >> n;
        int num = 2;
        while(num<n){
            if(n % num == 0){
                cout << "Not Prime" << endl;
                break;
            }
            else{
            num=num+1;
            cout << "Prime number" << endl;
            break;
            }
        
        }
    }