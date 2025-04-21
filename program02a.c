#include<stdio.h>
#include<math.h>
int main()
{
    float f(float x);
    float a, b,sum=0,result,h; 
    int i,n;
    printf("Enter the number of subdivision n\n");
    scanf("%d",&n);
    printf("Enter the lower limit a=");
    scanf("%f",&a);
    printf("Enter the upper limit b=");
    scanf("%f",&b);
    h=(b-a)/n;
    for (i=1;i<n;i++)
    sum=sum+f(a+i*h);
    result=h*.5*(f(a)+f(b)+2*sum);
    printf("The required numerical integral value is %.5f\n", result);
}
float f(float x)
{
return(x/(1+x));
}