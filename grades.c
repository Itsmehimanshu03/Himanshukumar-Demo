#include <stdio.h>

int main(){
    int sub1,sub2,sub3,sub4,sub5,sum;
    float per;

    printf("Enter marks obtained in All subjects\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);

    sum=sub1+sub2+sub3+sub4+sub5;
    per=(float)sum/5;

    if (per>=90) printf("The grade obtained is A");
    else if (per>=80 && per<90) printf("\n The grade obtained is B");
    else if (per>=60 && per<80) printf("\n The grade obtained is C");
    else printf("\n The grade obtained is D");

    printf("\n The total marks obtained is %d",sum);
    printf("\n The percentage obtained is %f",per);

    return 0;
}