using namespace std;

#include <iostream>
#include <vector>

bool LemonadeChange(vector<int>& bills){
    int change[2] = {0,0}; // 5 10

    for(int i: bills){
        
        switch (i)
        {
            case 5:
                change[0]++;
                break;
            case 10:
                if(change[0]>0){
                    change[0]--;
                    change[1]++;
                }
                else{
                    return false;
                }
                break;
            case 20:
                if (change[1]>0 && change[0]>0){
                    change[0]--;
                    change[1]--;
                }
                else if(change[0]>2){
                    change[0]-=3;
                }
                else{
                    return false;
                }
                break;
            default:
                break;
        }
    }

    return true;
}

int main(){
    vector<int> bills = {5,5,5,10,20};
    cout << LemonadeChange(bills) << endl;
}