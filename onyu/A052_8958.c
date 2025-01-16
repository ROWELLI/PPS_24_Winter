#include <stdio.h>
#include <string.h>

int count(char* mark);
int main(void){
  int num;
  char ox[80];
  scanf("%d", &num);
  for(int i=0; i<num; i++){
    scanf("%s", ox);
    int score = count(ox);
    printf("%d\n", score);  
  }
}  
int count(char* mark){
  int sum=0;
  int count=0;
  for(int i=0; i<strlen(mark); i++){
    if(mark[i]=='O'){
      if(mark[i+1]=='O'){
        count++;
        sum+=count;                        
      }
      if(i==0 && mark[i+1]=='X'){
        sum+=1;
        count=0;
      }
      else if(mark[i-1]=='O'&& mark[i+1]=='X'){
        count++;
        sum+=count;
        count=0;
      }
      else if(mark[i+1]=='\0'){
        sum+=count+1;
      }
      else if(mark[i-1]=='X' && mark[i+1]=='X'){
        sum+=1;
        count=0;
      }
    }
  }
  return sum;
}