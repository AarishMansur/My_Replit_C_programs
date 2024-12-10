#include<stdio.h>
int reverse(char str[]){
  int i,length = 0;
  char temp;
  // calculate string length, and also the mistake which I made was to use str() instead of str[], so yeah keep that in mind 
  while(str[length] != '\0'){
    lenght ++
  }
  // Reversing the whole string
  for(i=0;i<lenth/2;i++){
    temp = str[i];
    str[i] = str[length -i-1];
    str[length -i-1] = temp;
  }
  return 0;
}
int main(){
char str[100];
  printf("Enter the string :");
  scanf("%s",&str); // yeah just that dont use array concept like str[i] you dump!!
  reverse(str);
  printf("Reversed string is = %s",str);
}
