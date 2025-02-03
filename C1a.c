
// Write a program to find a real root of a given equation by section method

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,m,tol,h;
    int i;
    float f(float);
    printf("Enter the interval [a,b]\n");
    scanf("%f %f",&a,&b);
    if(f(a)*f(b)==0)
    {
        if (f(a)==0 && f(b)==0)
            printf("The real roots are equal %f and %f\n",a,b);
        else if(f(a)==0)
            printf("The real root is: %f\n",a);
        else
            printf("The real root is: %f\n",b);
    }
    else if(f(a)*f(b)<0)
    {
            printf("Enter the tolerance:\n");
            scanf("%f",&tol);
                h-fabs(a-b);
            printf("The ith iterative is\n");
            printf("ite.no\t\t\t x\n");
    for (i=1;h>tol;++i)
    {
        m=(a+b)/2;
        h-fabs(m-a);
    if(f(a)*f(m)>0)
        a=m;
    else
        b=m;
            printf("%d\t\t\t%f\n",i,m);
    }
            printf("the functional value at the required approximate root is f(%f)=%f\n",m,f(m));
            printf("The iteration number is %d\n",i-1);
    }
    else
            printf("There may not have real root between %f and %f\n",a,b);
}
    float f(float x)

{ 
    return(pow(x,3)-x-1);
}