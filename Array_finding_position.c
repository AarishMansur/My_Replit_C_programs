#include<stdio.h>
int main(){
  int x,n,i;
  printf("Define your arrays size");
  scanf("%d",&n);
  int a[n];
  // Entering values of arrays 
  printf("Enter the values of arrays\n ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("What number do you want to find :");
  scanf("%d",&x);
  // Checking conditions 
  /* Mistake I did = I assign the value  a[i]-1 instead of i this will only minus one the value of number for ex if we put 90 it will give us 89 position 
   which is wrong , and also forgot to use break statement, and we can also perform this program by declaring a variable found =0 and further more*/
  for(i=0;i<n;i++){
    if(x==a[i]){
      printf("%d number is found at index %d",x,i);
      break;
    }
  }
  // it means loops pura chal gaya but fir bhi number nahi mila, because mene break statement bhi lagaya tha 
  if(i==n){
    printf("Number does not found!!\n Enter a valid number.");
  } 
}
