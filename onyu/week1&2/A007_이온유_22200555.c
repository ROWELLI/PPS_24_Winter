#include <stdio.h>

int main(){
    int note[8] = {0};
    int check_a = 0;
    int check_b = 0;
    for(int i=0; i<8; i++){
        scanf("%d", &note[i]);
    }
    for(int i=0; i<8; i++){
        if(note[i] != 8-i){
            check_a = 1;
        }
        if(note[i] != i+1){
            check_b = 1;
        }
    }
    if(check_b == 0) printf("ascending\n");
    else if(check_a == 0) printf("descending\n");
    else printf("mixed\n");
    return 0;
}
