using namespace std;

#include <iostream>

const char Absent = 'A';
const char Late = 'L';
const char Present = 'P';

bool checkRecord(string s) {
    int absenceCount =0;
    int lateCount =0;

    for(const char &c : s){
        switch(c){
            case Absent:
                if(++absenceCount>1){
                    return false;
                }
                lateCount=0;
                break;
            case Late:
                if(++lateCount>2)
                    return false;
                break;
            case Present:
                lateCount=0;
                break;
            default:
                break;
        }
    }

    return true;
}