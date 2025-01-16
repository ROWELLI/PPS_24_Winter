#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  int k=0;
  int total = 0;
  int num[10000];
  scanf("%d", &num1);
  scanf("%d", &num2);
  for(int i=1; i<46; i++){
    for(int j=1; j<=i; j++){
      num[k] = i;
      k++;
    }
  }
  for(int i=num1-1; i<=num2-1; i++){
    total += num[i];
  }
  printf("%d\n", total);
  return 0;
}