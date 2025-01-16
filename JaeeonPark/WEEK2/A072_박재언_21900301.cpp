using namespace std;

#include <iostream>
#include <cstdio>
#include <vector>

bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int dayOfYear(string date) {
    const char *dateString = date.c_str();
    int year,month,day;

    sscanf(dateString,"%d-%d-%d",&year,&month,&day);    

    vector<int> daysOfMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(isLeapYear(year)){
        daysOfMonth[1] = 29;
    }

    int result =day;

    for(int i=0;i<month-1;i++){
        result += daysOfMonth[i];
    }
    
    return result;
}

int main(){
    printf("%d\n", dayOfYear("2019-02-10"));
}