using namespace std;

#include <string>
#include <iostream>
#include <unordered_set>

bool CheckGroupWord(string word){
    char previousChar;
    int wordLen = word.length();
    unordered_set<char> characters;

    for(int i=0;i<wordLen;i++){
        if(characters.count(word[i])>0){
            if(previousChar != word[i]){
                return false;
            }
        }
        else{
            characters.insert(word[i]);
            previousChar = word[i];
        }
    }
    
    return true;
}

void CountGroupWord(){
    int count;
    cin >> count;

    int result=0;
    string input;
    for(int i=0;i<count;i++){
        cin >> input;

        if(CheckGroupWord(input)){
            result++;
        }    

    }

    cout << result << "\n";
}


int main(){
    freopen("groupWordInput.txt","r",stdin);
    CountGroupWord();
}