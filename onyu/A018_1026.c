#include <stdio.h>

int main(){
    int n;
    int n1[100] = {0};
    int n2[100] = {0};
    int temp = 0;
    int total = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &n1[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &n2[i]);
    }
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(n1[j]<n1[j+1]){
                temp = n1[j];
                n1[j] = n1[j+1];
                n1[j+1] = temp;
            }
        }
    }
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(n2[j]>n2[j+1]){
                temp = n2[j];
                n2[j] = n2[j+1];
                n2[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        total += n1[i] * n2[i];
    }
    printf("%d", total);
}