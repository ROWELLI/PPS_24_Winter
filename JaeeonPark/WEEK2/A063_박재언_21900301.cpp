using namespace std;

#include <algorithm>
#include <vector>

int heightChecker(vector<int>& heights) {
    vector<int> expected = heights;
    sort(expected.begin(),expected.end());
    int mismatchCount= 0;
    int len = heights.size();
    for(int i=0;i<len;i++){
        if(heights[i] != expected[i])
            mismatchCount++;
    }

    return mismatchCount;       
}