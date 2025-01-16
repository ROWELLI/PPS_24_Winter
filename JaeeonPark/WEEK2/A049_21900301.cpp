using namespace std;

#include <iostream>
#include <string>
#include <unordered_set>

unordered_set<char> vowels = {'a','e','i','o','u'};

void PasswordPronounce(){
    while(1){
        string input;
        int len;
        bool acceptable = true;
        
        cin >> input;
        
        if(input == "end"){
            break;
        }
        
        len = input.length();

        int vowelCount =0;
        int consonantConsequtiveCounter = 0;
        int vowelConsequtiveCount = 0;
        string stringAccumulator="";

        for(int i=0;i<len;i++){
            
            if(vowels.count(input[i])>0){
                vowelCount++;
                if(vowelConsequtiveCount==0){
                    stringAccumulator = input[i];
                }
                else{
                    stringAccumulator += input[i];
                     if(input[i-1]==input[i] && (input[i] !='e' && input[i]!='o')){
                        acceptable = false;
                        break;
                    }
                }
                consonantConsequtiveCounter=0;
                vowelConsequtiveCount++;
            }
            else{
                 if(consonantConsequtiveCounter==0){
                    stringAccumulator = input[i];
                }
                else{
                    stringAccumulator += input[i];
                    if(input[i-1]==input[i]){
                        acceptable = false;
                        break;
                    }
                }
                consonantConsequtiveCounter++;
                vowelConsequtiveCount=0;
            }

            if(consonantConsequtiveCounter > 2 || vowelConsequtiveCount>2){
                acceptable = false;
                break;
            }
        }

        if(vowelCount==0){
            acceptable = false;
        }
        
        cout << "<" << input <<"> is ";

        if(acceptable){
            cout << "acceptable." << "\n";
        }
        else{
            cout <<"not acceptable." << "\n";
        }
    }

}

int main(){
    //freopen("passwordPronounce.txt","r",stdin);
    PasswordPronounce();
}