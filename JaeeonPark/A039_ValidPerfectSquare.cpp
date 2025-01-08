using namespace std;

#include <iostream>

bool isPerfectSquare(int num) {
    if(num <=0)
        return false;
    if(num == 1)
        return true;
    
    int low = 0, high = num;

    while(low <= high){
        int mid = low + (high- low)/2;
        if(mid == 0)
            return false;
        
        if(mid == num/mid){
            if(num%mid == 0){
                return true;
            }
        }

        if(mid < num/mid){
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    return false;
}

