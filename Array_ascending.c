#include<stdio.h>
int main(){
int n,temp;
  printf("Enter the size of array");
  scanf("%d",&n);
  int a[n];
// Using for loop  
  printf("Enter the elements.\n");
  for(int i =0;i<n;i++){
    scanf("%d",&a[i]);
  }
  // Now main part 
  for(int i =0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
      if(a[j]>a[j+1]){
        temp = a[j];
        a[j]= a[j+1];
        a[j+1] = temp;
      }
    }
  }
  // now printing 
  for(int i=0;i<n;i++){
    printf("%d",a[i]);
  }
  return 0;
}
