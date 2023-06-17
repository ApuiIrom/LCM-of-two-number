#include<stdio.h>
int main()
{
int j=2,n1=1000,n2=1000,lcm=1,i,l;
i=n1,l=n2;
while(j!=10){
    for(j=2;j<=9;j++)
    if(n1%j==0 && n2%j==0)
    {
        n1=n1/j;
        n2=n2/j;
        lcm=j*lcm;
        break;
    }
}
lcm=n1*n2*lcm;
printf("LCM of %d and %d is %d",i,l,lcm);
}
