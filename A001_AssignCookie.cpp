using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int FindContentChildren(vector<int>& g, vector<int>& s) {
    int happyCount = 0;
    int cookieIndex = 0;

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    while(happyCount < g.size() && cookieIndex < s.size()){
        if(g[happyCount] <= s[cookieIndex]){
            
            happyCount++;
        }
        cookieIndex++;
    }

    return happyCount;
}

int main() {
    vector<int> g = {1, 2, 3}; 
    vector<int> s = {1, 1};   

    int result = FindContentChildren(g, s);
    cout << "Number of happy children: " << result << endl;

    return 0;
}

