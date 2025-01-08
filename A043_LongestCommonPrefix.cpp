using namespace std;

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

static bool lengthSort(const string& a, const string&b){
    return a.length() < b.length();
}

string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty())
        return "";
    if(strs.size()==1){
        return strs[0];
    }

    string prefix ="";
    char indexString;
    
    sort(strs.begin(), strs.end(),lengthSort);
    
    int repeatCount = strs[0].length(); 
    for(int i=0;i<repeatCount;i++){
        indexString = strs[0][i];

        for(int j=1;j<strs.size();j++){
            if(strs[j][i] != indexString){
                return prefix;  
            }
        }

        prefix+= indexString;
    }
    return prefix;
}

int main(){
    vector<string> strs = { "dog","racecar","car"};

    cout << longestCommonPrefix(strs) << "\n";
}