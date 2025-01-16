using namespace std;

#include <iostream>
#include <cstdio>

void CeasarCypher(){
    string input;
    cin >> input;

    for(char &c:input){
        c -= 3;
        if(c < 'A')
            c+=26;
        printf("%c",c);
    }
    
}

int main(){
    CeasarCypher();
}