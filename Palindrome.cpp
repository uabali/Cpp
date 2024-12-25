#include <iostream>
using namespace std;

bool is_polindrome(string text){

for(int i=0; i< text.length()/2; i++){
    if( text[i] != text[text.length()-i-1]){
        return false;
    }
}
return true;
}

int main(){

    string test = "icardiidraci";

    if( is_polindrome(test)){
        cout << test << "   -> is a is_polindrome" << endl;
    }
    else{
        cout << test << "   -> is NOT a is_polindrome" << endl;
    }

    return 0;
}