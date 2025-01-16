using namespace std;

#include <string>

string removeDuplicates(string s) {
    
    int len = s.length();
    string temp = "";

    for(int i=0;i<len;i++){
        if(temp=="" || s[i] != temp.back()){
            temp.push_back(s[i]);
        }
        else{
            temp.pop_back();
        }
    }    
    return temp;
}