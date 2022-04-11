#include<iostream>
using namespace std;

int main(){

    char a;
    cout << "Enter Aany charater in capital or small or digit: "<< endl;
    cin >> a;
    
    if(a>='a' && a<='z'){
        cout<< "This is Lowercase"<< endl;
    }
    else if(a>='A' && a<='Z'){
        cout<< "This is Uppercase" <<endl;
    }

    else if(a>='0' && a<='9'){
        cout<<"This is digit" << endl;
    }
}