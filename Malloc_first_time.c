#include<stdio.h>
#include<stdlib.h>
int main(){
  int max,i,*p;
  printf("Enter Arrays size.\n");
  scanf("%d",max);
  // Now using malloc
  p = (int *)malloc(max * sizeof(int);
  // Using loops
  for(i = 0;i<=5;i++){
    p[i] = i*i;
    printf("%d",p[i]);
  }
  return 0;
}
