using namespace std;

#include <iostream>


string AnalyzeHexacord(){
    int ascending[]= {1,2,3,4,5,6,7,8};
    int descending[]= {8,7,6,5,4,3,2,1};
    int input;
    string tempResult ="";
    
    cin >> input;

    if(input == 1){
        tempResult = "ascending";
    }
    else if(input ==8){
        tempResult = "descending";
    }
    else{
        tempResult = "mixed";
        return tempResult;
    }    

    for(int i=1;i<8;i++){
        cin >> input;

        if(tempResult == "ascending"){
            if(input != ascending[i]){
                tempResult = "mixed";
                break; 
            }
        }
        else if(tempResult == "descending"){
             if(input != descending[i]){
                tempResult = "mixed";
                break; 
            }
        }
    }

    return tempResult;
}

int main(){
    freopen("hexacordInput.txt", "r", stdin);
    string result = AnalyzeHexacord();
    cout << result << endl;
    return 0;
}