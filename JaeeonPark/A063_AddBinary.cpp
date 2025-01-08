using namespace std;

#include <string>
#include <algorithm>
#include <iostream>
string addBinary(string a, string b){
    int a_counter = a.length() -1;
    int b_counter = b.length() -1;
    string result ="";
    int carry=0;
    while(a_counter>=0 || b_counter>=0){
        if(a_counter >=0){
            carry += a[a_counter--] - '0';
        }
        
        if(b_counter >=0){
            carry += b[b_counter--] - '0';
        }
        
        result += carry % 2 + '0';
        carry = carry /= 2;
    }
    if(carry>0)
        result += carry + '0';
    reverse(result.begin(),result.end());
    return result;
}

