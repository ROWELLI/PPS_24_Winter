using namespace std;

#include <iostream>
#include <string>
#include <cmath> 

int AddDigits(int num){
    string stringRep = to_string(num);
    int stringLength = stringRep.length();
    
    if(stringLength == 1){
        return num;
    }
    else{
        int totalNum = 0;
        for(int i=0;i<stringLength;i++){
            totalNum += stringRep[i] - '0';
        }
        return AddDigits(totalNum);
    }
}

 int addDigits(int num) {
    if (num == 0) return 0;
    return 1 + (num - 1) % 9;
}

int main(){
    cout << AddDigits(386) << endl;
    cout << addDigits(386) << endl;
}