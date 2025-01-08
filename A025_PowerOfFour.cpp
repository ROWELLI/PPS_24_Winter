using namespace std;

#include <iostream>

bool IsPowerOfFour(int n) {
    if(n <= 0)
        return false;
    
    double x = log(n)/log(4);    
    
    return floor(x) == x; //1==1 // 1.234 != 1
}

int main(){
    int test;
    cin >> test;
    cout << IsPowerOfFour(test) << endl;
}