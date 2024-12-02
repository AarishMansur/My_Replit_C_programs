#include<stdio.h>
int main(){
  int num[15] = {1,3,5,6,8,9,9,9,4,6,5,4,};
  int n,i,count;
  printf("Enter An element to search :");
  scanf("%d",&n);
  count = 0;
  for(i=0;i<=12;i++){
    if(num[i]==n){
      count++;
    }
  }
  printf("Number = %d is found %d times in the arrays",n,count);
  return 0 ;
}
