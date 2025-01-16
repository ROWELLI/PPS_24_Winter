using namespace std;

#include <string>
#include <iostream>

void SortDescendingOrder(){
    string input;
    cin >> input;
    int len = input.length();
    for(int i=0;i<len-1;i++){
        bool swapped = false;
        for(int j=0;j<len-i-1;j++){
            if(input[j]< input[j+1]){
                swap(input[j],input[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
    cout << input << "\n";
}

int main(){
    SortDescendingOrder();
}
