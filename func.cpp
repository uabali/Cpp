#include <iostream>
using namespace std;

void carpim(int a, int b){
    cout << a * b << endl;
}

int main(){

    int a,b;

    cout << "Please enter a number: " << endl;
    cin >> a ;
    cout << "Please enter a number: " << endl;
    cin >> b;

    carpim(a,b);

    return 0;
}