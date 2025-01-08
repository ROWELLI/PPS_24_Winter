using namespace std;

#include <string>
#include <vector>
#include <iostream>

bool backspaceCompare(string s, string t) {
    vector<char> s_edited;
    vector<char> t_edited;

    for(int i=0;i<s.length();i++){
        if(s[i] == '#'){
            if(s_edited.size()<1)
                continue;
            s_edited.pop_back();
        }
        else{
            s_edited.push_back(s[i]);
        }
    }

    for(int i=0;i<t.length();i++){
        if(t[i] == '#'){
            if(t_edited.size()<1)
                continue;
            t_edited.pop_back();
        }
        else{
            t_edited.push_back(t[i]);
        }
    }

    string s_result(s_edited.begin(), s_edited.end());
    string t_result(t_edited.begin(), t_edited.end());
    
    return s_result == t_result;
}

int main(){
    cout << backspaceCompare("##abc", "##cbc") <<endl;
}