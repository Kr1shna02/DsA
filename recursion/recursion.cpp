#include <iostream>
using namespace std;

void print(int a) {  
    if (a == 1) { // Base condition
        cout << a << endl;
        return;
    }
    cout << a << endl;
    print(a - 1); // recursive call
}

int factorial(int a){
    if(a==1){
        return 1;
    }
    return a*factorial(a-1);
}

int main() {
    int a = 5;
    print(a);
    cout<<factorial(a)<<endl;  
}
