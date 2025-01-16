using namespace std;

#include <cstdio>
#include <vector>
#include <cstring>

vector<int> in_stack, out_stack;
void Reverse(){
    while(!in_stack.empty()){
        out_stack.push_back(in_stack.back());
        in_stack.pop_back();
    }
}

void HandleQueueCommands(){
    int count;
    scanf("%d",&count);

    while(count--){
        char command[10];
        scanf("%s",command);

        if(!strcmp(command,"push")){
            int input = 0;
            scanf("%d",&input);
            in_stack.push_back(input);
        }
        else if(!strcmp(command,"pop")){
            if(in_stack.empty() && out_stack.empty())
                printf("%d\n",-1);
            else{
                if(out_stack.empty())
                    Reverse();
                int topItem = out_stack.back();
                out_stack.pop_back();
                printf("%d\n",topItem);
            }
        }
        else if(!strcmp(command,"size")){
            printf("%d\n", in_stack.size() + out_stack.size());
        }
        else if(!strcmp(command,"empty")){
            printf("%d\n", (in_stack.empty() && out_stack.empty())? 1:0);
        }
        else if(!strcmp(command,"front")){
            if(out_stack.empty())
                Reverse();

            printf("%d\n", (in_stack.empty() && out_stack.empty())? -1: out_stack.back());
        }
        else{ //back
            if(out_stack.empty())
                Reverse();
            
            if(in_stack.empty() && out_stack.empty())
                printf("%d\n", -1);
            else if(!in_stack.empty())
                printf("%d\n",in_stack.back());
            else{
                printf("%d\n",out_stack.front());
            }

        }
    }    
}

int main(){
    //freopen("queueInput.txt","r",stdin);
    HandleQueueCommands();
}