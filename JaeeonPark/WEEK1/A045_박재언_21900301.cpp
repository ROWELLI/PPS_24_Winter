using namespace std;

#include <iostream>
#include <map>
#include <cctype>

void MostFrequentVocab(const string& vocab){
    map<char,int> frequencyMap;
    
    char mostFrequentChar;
    int mostFrequentFrequency=0;
    bool check = false;
    for(char c: vocab){
        c = toupper(c);
        frequencyMap[c]++;
        if(frequencyMap[c] == mostFrequentFrequency){
            check = true;
        }
        else if(frequencyMap[c] > mostFrequentFrequency){
            mostFrequentChar = c;
            mostFrequentFrequency++;
            check = false;
        }
    }

    if(check == true){
        cout << "?" << "\n";
    }else{
        cout << mostFrequentChar << "\n";
    }
}

int main(){
    string vocab;
    cin >> vocab;
    MostFrequentVocab(vocab);
}