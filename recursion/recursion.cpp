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

int sum(int num){
    if(num==1){
        return 1;
    }
    return num+sum(num-1);
}
int reverse_array(){
     
}
int main() {
    int a = 5;
    print(a);
    cout<<"Factorial of " <<a<<" "<<factorial(a)<<endl; 
    int num;
    cin>>num;
    cout<<"Sum of "<<num<<" numbers: "<< sum(num)<<endl;
}
