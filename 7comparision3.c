#include <stdio.h>

int main(){
    float n1,n2,n3;

  printf("Enter the 1st Number:");
  scanf("%f",&n1);

  printf("Enter the 2nd Number:");
  scanf("%f",&n2);

  printf("Enter the 3rd Number:");
  scanf("%f",&n3);

  if (n1>=n2 && n1>=n3) {
    printf("\n The greater no. is:%.2f",n1);
  }  else if (n2>=n3 && n1>=n1) {
    printf("\n The greater no. is:%.2f",n2);
  } else { printf("\n The greater no. is:%.2f",n3);
  }
return 0;
}