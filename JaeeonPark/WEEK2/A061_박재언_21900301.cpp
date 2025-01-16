using namespace std;

#include <string>
#include <iostream>

string convertToTitle(int columnNumber) {
    string result="";
    
    while(columnNumber-- > 0){
        result = char(columnNumber % 26 + 'A') + result;
        columnNumber/=26;
    }
    return result;
}

int main(){
    cout << convertToTitle(2147483647);
}