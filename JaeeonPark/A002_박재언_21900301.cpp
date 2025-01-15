using namespace std;
#include <vector>
#include <iostream>

vector<vector<int>> PascalTriangle(int numRows){
    vector<vector<int>> outerList;
    
    for(int rowCount = 0; rowCount < numRows; rowCount++){
        
        vector<int> innerList;

        for(int i=0;i<=rowCount;i++){
            if(i == 0 || i == rowCount){
                innerList.push_back(1);
            }
            else{
                innerList.push_back( outerList[rowCount-1][i-1] +  outerList[rowCount-1][i]);
            }
        }

        outerList.push_back(innerList);
    }

    return outerList;
}

void printPascalTriangle(const vector<vector<int>>& triangle) {
    for (const auto& row : triangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    
    // Get number of rows from the user
    cout << "Enter the number of rows: ";
    cin >> numRows;

    // Generate the Pascal's Triangle
    vector<vector<int>> result = PascalTriangle(numRows);

    // Print the Pascal's Triangle
    cout << "Pascal's Triangle: \n";
    printPascalTriangle(result);

    return 0;
}