using namespace std;

#include <cstdio>
#include <cstring>


void Stack(){
    int stack[10005];
    char command[10];
    int length =0;
    int count;
    scanf("%d ",&count);

    while(count--){
        scanf("%s",command);
        if(!strcmp(command,"push")){
            int value;
            scanf("%d ",&value);
            stack[length++] = value;
        }
        else if(!strcmp(command,"pop"))
            printf("%d\n",(length>0? stack[--length]:-1));
        else if(!strcmp(command,"size"))
            printf("%d\n",length);
        else if(!strcmp(command,"empty"))
            printf("%d\n",(length == 0? 1:0));
        else 
            printf("%d\n",(length>0? stack[length-1]:-1));
    }
}

int main(){
    Stack();
}