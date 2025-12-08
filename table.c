//To Find The table of given
#include <stdio.h>

int main()
 {

  int n,i,x;
     
printf("Enter the number to find Table");
scanf("%d",&n);

printf("\n The table of %d\n",n);

for(i=1;i<=10;i++) {
printf("\n %d x %d = %d",n,i,i*n);
}

    return 0;
}