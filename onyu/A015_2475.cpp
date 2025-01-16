#include <stdio.h>

int main(void) {
  int num[5];
  int total=0;
  int remain;
  scanf("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);
  for(int i=0; i<5; i++){
    total += num[i]*num[i];
  }  
  remain = total%10;
  printf("%d", remain);
  return 0;
}