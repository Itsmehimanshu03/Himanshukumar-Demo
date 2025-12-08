#include <stdio.h>

int main(){
    int n1,n2;

  printf("Enter the 1st Number:");
  scanf("%d",&n1);

  printf("Enter the 2nd Number:");
  scanf("%d",&n2);

  if (n1>n2) {
    printf("\n The greater no. is:%d",n1);
  }  else {
    printf("\n The greater no. is:%d",n2);
  }

return 0;
}