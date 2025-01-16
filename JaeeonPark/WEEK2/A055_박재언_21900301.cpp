using namespace std;

#include <string>
#include <iostream>

string removeOuterParentheses(string s) {
    int rightParenthesisCounter=0;
    int leftParenthesisCounter=0;
    const char *ptr = s.c_str();    
    string result="";

    while(*ptr != '\0'){
        if(*ptr == '('){
            if(++rightParenthesisCounter > 1){
                result += '(';
            }
        }
        else{
            if(++leftParenthesisCounter < rightParenthesisCounter){
                result += ')';
            }
        }        

        ++ptr;
        if(leftParenthesisCounter == rightParenthesisCounter){
            rightParenthesisCounter=0;
            leftParenthesisCounter=0;
        }
    }   

    return result;
}

int main(){
    cout << removeOuterParentheses("()()") <<"\n";
}