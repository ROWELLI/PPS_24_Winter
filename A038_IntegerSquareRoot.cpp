using namespace std;

#include <iostream>

int integerSquareRoot(int x){
    if(x == 0 || x == 1) return x;

    int low = 0;
    int high = x;
    int answer= 0;

    while( low <= high){
        int mid = low + (high - low)/2;
        if((long long)mid * mid <= x){
            answer = mid;
            low = mid+1;
        }else{
            high = mid - 1;
        }
    }
    return answer;
}