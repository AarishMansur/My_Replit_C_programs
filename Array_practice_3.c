#include<stdio.h>
int main(){
  int i,n;
  printf("Enter the number of elements.");
  scanf("%d",&n);
 int  a[n];
  printf("Enter %d elements in array\n",n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int max = a[0];
  int min = a[0];
  // Using for loop and if conditions, because after every if conditions it will update the max value until it gets final value, and yes a[i] can hold 
  // both values of max and min so yeah!! learned something new !!!
  for(i=0;i<n;i++){
    if(a[i]>max){
      max = a[i];
    }
    if(a[i]<min){
      min = a[i];
    }
  }
  printf("The maximum number in arrays is = %d\n",max);
  printf("The minimum number in arrays is = %d",min);
  
}
