#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "enter the number: ";
    cin >> n;
    int a=1;
    int sum=0;

    while (a<=n)
    {
        sum=sum + a;
        a=a + 1;
    }
    cout << "Sum of n is: "<< sum <<endl;
    
}