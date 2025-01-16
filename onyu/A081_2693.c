#include <stdio.h>

int main(void) {
  int data[10];
  int num;
  int n[1000][10];
  int count;
  int temp;
  scanf("%d", &count);
  for(int j=0; j<count; j++){
    for(int i=0; i<10; i++){
      scanf("%d", &num);
      n[j][i] = num;

    }
  }  
  for(int k=0; k<count; k++){
    for (int i = 0; i < 9; i++){
      for (int j = 0; j < 9-i; j++){
        if (n[k][j] > n[k][j + 1]){
            temp = n[k][j];
            n[k][j] = n[k][j+1];
            n[k][j+1] = temp;
        }
      }
    }
  }
  for(int i=0; i<count; i++){
    printf("%d\n", n[i][7]);
  }
  // for(int i=0; i<count; i++){
  //   for(int j=0; j<10; j++){
  //     printf("%d ", n[i][j]);
  //   }
  //   printf("\n");
  // }
  return 0;
}