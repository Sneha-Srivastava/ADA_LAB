#include <stdio.h>
int gcd(int m,int n)
{
    int r;
    do{
      r=m%n;
      m=n;
      n=r;
    } while(n!=0);
    return m;
}
int main()
{
    int m,n,res;
    printf("Enter m and n\n");
    scanf("%d%d",&m,&n);
    res=gcd(m,n);
    printf("The GCD of %d and %d is %d.\n",m,n,res);

}
