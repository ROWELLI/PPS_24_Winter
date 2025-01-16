using namespace std;

#include <vector>
#include <string>
#include <iostream>

int calPoints(vector<string>& operations) {
    vector<int> scores;
    for(string &op:operations){
        if(op == "+"){
            scores.push_back(scores[scores.size()-1] + scores[scores.size()-2]);
        }
        else if(op=="D"){
            scores.push_back(scores[scores.size()-1]*2);
        }
        else if(op=="C"){
            scores.pop_back();
        }
        else{
            scores.push_back(stoi(op));
        }
    }

    int length = scores.size();
    int total= 0;
    for(int i=0;i<length;i++){
        total+=scores[i];
    }
    return total;
}

int main(){
    vector<string> testcase = {"5","2","C","D","+"};
    cout << calPoints(testcase);
}