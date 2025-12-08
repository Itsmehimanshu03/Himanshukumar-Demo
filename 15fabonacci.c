// #include <stdio.h>

// int main(){
//     int n,n1=0,n2=1,nt=0,i;

//     printf("Enter the no. of terms");
//     scanf("%d",&n);

//     for(i=0;i<=n;i++)
//          {    printf("The fabinocci series is:%d\n",nt);

//    nt+=n1+n2;

//     n1=n2;
//     n2=nt;

//     }

//     return 0;
// }

#include <stdio.h>

int main(){
    int n1=0, n2=1, n3=0;
    for(int i=0; i<10; i++)
    {
        n3+=n1;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n, a = 0, b = 1, c;
//     printf("Enter n : ");
//     scanf("%d", &n);
//     if (n >=1)
//         printf("%d", a);
//     if (n>=2)
//         printf("%d", b);
    
//     while (n-2>0)
//     {
        
//         c=a+b;
//         printf("%d", c);
//         a = b;
//         b = c;
//         n = n - 1;
//     }
//     return 0;
// }