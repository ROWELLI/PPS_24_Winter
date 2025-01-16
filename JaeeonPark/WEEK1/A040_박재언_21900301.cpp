using namespace std;

#include <string>
#include <iostream>
#include <unordered_set>


int CountVowel(const string& str){
    unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    int count = 0;

    for(char c : str){
        if(vowels.count(c)>0){
            count++;
        }
    }

    return count;
}


bool halvesAreAlike(string s) {
    int length = s.length();
    int mid = length/2;

    string a = s.substr(0,mid );
    string b = s.substr(mid ,length);

    return CountVowel(a) == CountVowel(b); 
}

int main(){
    cout << halvesAreAlike("book") << endl;
}