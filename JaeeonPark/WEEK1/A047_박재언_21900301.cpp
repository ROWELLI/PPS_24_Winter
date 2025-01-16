using namespace std;

#include <cstdio> 
#include <cstring> 

void OneLineTenWords(){
    char input[100];
    scanf("%s",input);
    int length = strlen(input);
    for(int i=0;i<length;i++){
        printf("%c", input[i]);
        if((i+1)%10 == 0){
            printf("\n");
        }
    }
}

int main(){
    OneLineTenWords();
}