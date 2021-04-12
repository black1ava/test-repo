#include<stdio.h>

int main(){
  printf("Hello World");
  int total = 0;
  for(int i = 0; i <= 10; i++){
    total += i;
  }

  printf("%d", total);
  return 0;
}
