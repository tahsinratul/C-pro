//Write a program to find a real root of a given equation by Newton Raphson method method: x4-2x3-4x2+4x+4 = 0

/*
How It Works:

Takes an initial guess x0
​
Checks if f′(x0)=0 (to prevent division by zero)

Iteratively updates x until the error (h = |x_{n+1} - x_n|) is below a given tolerance (0.001)

Prints the computed root, function value at the root, and iteration count
*/



#include<stdio.h>
#include<math.h>
main()
{
    float f(float);
    float df (float);
    float x0,x, tol=0.001,h;
    int i;
printf("Enter the initial guess x0\n");
scanf("%f",&x0);
if (df (x0)==0)
printf("Enter x0 value is not suitable");
else
{
    h=fabs(x0-x);
    for(i=1;h>tol;i++)
    {
    x=x0-(f(x0)/df(x0));
    h=fabs(x0-x);
    x0=x;
printf("the real root is=%f\n",x);
}
printf("the real root is = %f\n",x);
printf("the value at x is f(% .4f)=%.4f\n",x,f(x));
printf("the iteration number is= %d\n",i);
}
}
    float f(float x)
{
    return(pow(x,4)-2.0*pow(x,3)-4*pow(x,2)+4*x+4.0);
}
    float df(float x)
{
    return (4*pow(x,3)-6.0*pow(x,2)-8*x+4);
}