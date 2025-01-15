using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    //freopen("sortCoordinateInput.txt","r",stdin);
    vector<pair<int,int>> coordinates;
    int coordinateCount;
    cin >> coordinateCount;

    int x,y;
    for(int i=0;i<coordinateCount;i++){
        cin >> x >> y;
        coordinates.push_back({x,y});
    }

    sort(coordinates.begin(), coordinates.end());
    
    for(auto &coordinate: coordinates){
        cout << coordinate.first << ' ' << coordinate.second << "\n";
    }
}