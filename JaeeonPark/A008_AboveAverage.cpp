using namespace std;
#include <iostream>
#include <vector>
#include <iomanip>

void AboveAverage(){
    int testCases;
    cin >> testCases;

    vector<float> aboveAveragePercentageList(testCases);

    for(int i=0;i<testCases;i++){
        int scoreCount;
        cin >> scoreCount;
        
        vector<int> scores(scoreCount);

        int totalScore=0;
        for(int j=0;j<scoreCount;j++){
            cin >> scores[j];
            totalScore+=scores[j];;
        }
        
        float testCaseAverage = static_cast<float>(totalScore) / scoreCount;

        int aboveAverageCount = 0;
        for(int j=0;j<scoreCount;j++){
            if(scores[j] > testCaseAverage){
                aboveAverageCount++;
            }
        }
        
        float aboveAveragePercentage = static_cast<float>(aboveAverageCount) / scoreCount;
        aboveAveragePercentageList[i] = aboveAveragePercentage *100;
    }

    for(int i=0;i<testCases;i++){
        cout << fixed << setprecision(3) << aboveAveragePercentageList[i] << "%" << endl;
    }

}

int main(){
    freopen("input.txt", "r", stdin);
    AboveAverage();
    return 0;
}