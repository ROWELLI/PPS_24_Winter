using namespace std;

#include<iostream>

void OXQuiz(){
    int inputCount;
    cin >> inputCount;

    for(int i=0;i<inputCount;i++){
        int correctCounter=0;
        int totalScore=0; 
        string input;
        cin >> input;

        const char* ptr = input.c_str();
        while(*ptr != '\0'){
            if(*ptr =='O'){
                correctCounter++;
                totalScore+=correctCounter;
            }
            else{
                correctCounter=0;
            }
            ++ptr;
        }
        cout << totalScore << "\n";
    }
}

int main(){
    freopen("oxQuizInput.txt","r",stdin);
    OXQuiz();
}