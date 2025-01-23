#include <iostream>
#include <vector>
using namespace std;

vector<int> vect[1001]; 
int visited[1001];      
int N, M;

void DFS(int v)
{
    visited[v] = 1;
    for (int i = 0; i < vect[v].size(); i++){
        int idx = vect[v][i];
        if (visited[idx] == 0){
            DFS(idx);
        }
    }
}

int main(){
    int x, y;
    int cnt = 0;
    cin >> N >> M;
    for (int i = 0; i < M; i++){
        cin >> x >> y;
        vect[x].push_back(y);
        vect[y].push_back(x);
    }

    for (int i = 1; i <= N; i++){
        if (visited[i] == 0){
            cnt++;
            DFS(i);
        }
    }
    cout << cnt << "\n";
}
