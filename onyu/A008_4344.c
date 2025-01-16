#include <stdio.h>

int main(void) {
  int sub;
  int stu[1000] = {0};
  int score[1000][1000] = {0};
  int total[1000] = {0};
  float ave[1000] = {0};
  int count[1000] = {0};
  float per[1000] = {0};
  scanf("%d", &sub);
  for(int i=0; i<sub; i++){
    scanf("%d", &stu[i]);
    for(int j=0; j<stu[i]; j++){
      scanf("%d", &score[i][j]);
      total[i] += score[i][j]; 
    }
    ave[i] = total[i]/stu[i]*1.0;
  }
  for(int i=0; i<sub; i++){
    per[i] = 0;
    for(int j=0; j<stu[i]; j++){
      if(score[i][j]>ave[i]){
        count[i]++;        
      }          
    }   
    per[i] = 100.0*count[i]/stu[i]; 
    printf("%.3f%%\n", per[i]);
  }
  return 0;
}