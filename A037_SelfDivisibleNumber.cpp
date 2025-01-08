using namespace std;

#include <vector>
#include <iostream>
#include <string>

vector<int> SelfDividingNumbers(int left, int right) {  
    vector<int> resultVector;
    for(int i= left; i<= right; i++){
        string stringRep = to_string(i);
        int stringLength = stringRep.length();
        bool result = true;

        for(int j=0;j<stringLength;j++){
            int integerValue = stringRep[j] - '0';
            if(integerValue == 0){
                result = false;
                break;
            }
            if(i % integerValue!= 0){
                result = false;
                break;
            }
        }

        if(result){
            resultVector.push_back(i);
        }
    }

    return resultVector;
}
