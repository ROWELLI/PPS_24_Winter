using namespace std;

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

void GetInitial(){
    map<char,int> initials;
    int count;
    cin >> count;

    string name;
    vector<char> resultList;
    
    for(int i=0;i<count;i++){
        cin >> name;
        if(++initials[name[0]] > 4 && find(resultList.begin(), resultList.end(), name[0]) == resultList.end()){
            resultList.push_back(name[0]);
        }
    }

    if(resultList.size() >0){
        sort(resultList.begin(), resultList.end());
        string result(resultList.begin(),resultList.end());
        cout << result << "\n";
    }
    else{
        cout << "PREDAJA" << "\n";
    }
}

int main(){
    freopen("basketballMatchInput.txt","r",stdin);
    GetInitial();
}