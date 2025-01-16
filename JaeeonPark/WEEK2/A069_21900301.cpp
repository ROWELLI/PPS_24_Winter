using namespace std;

#include <iostream>
#include <vector>

void JosephusOrder(){
    vector<int> people;
    int num, josephusNum;
    cin >> num >> josephusNum;

    for(int i=1;i<=num;i++){
        people.push_back(i);
    }

    vector<int> result;
    int index = 0;
    while(!people.empty()){
        index = (index + josephusNum -1) % people.size();
        result.push_back(people[index]);
        people.erase(people.begin()+index);
    }

    cout << "<";
    for (int i = 0; i < result.size(); i++) {
        if (i > 0) cout << ", ";
        cout << result[i];
    }
    cout << ">" << "\n";
}

int main(){
    JosephusOrder();
}