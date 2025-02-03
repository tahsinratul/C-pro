
//Write a program to find a real root of a given equation by bisection: x3-x-1=0

/*
This is a C program that implements the Bisection Method to find the root of the equation 

        𝑓(𝑥)=𝑥3−𝑥−1=0  within a given interval [𝑎,𝑏]

How It Works:

        The user inputs the interval [𝑎,𝑏]

The program checks:

        1. If 𝑓(𝑎)×𝑓(𝑏)=0 , one or both of the endpoints are roots

        2. If 𝑓(𝑎)×𝑓(𝑏)<0 , a root exists between 𝑎 and 𝑏 and the Bisection Method is applied

        3. Otherwise, it prints that there may be no real root in the given interval

If a root exists:

        1. The user inputs a tolerance value.

        2. The bisection method iterates:

                1. Compute the midpoint 𝑚 = 𝑎+𝑏/2

                2. Check the function value 𝑓(𝑚)

                3. Update 𝑎 or 𝑏 based on the sign of 𝑓(𝑚)

                4. Continue until the absolute difference between successive midpoints (h) is within the tolerance

Finally, the approximate root and function value at the root are displayed

*/ 

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
                h=fabs(a-b);
            printf("The ith iterative is\n");
            printf("ite.no\t\t\t x\n");
    for (i=1;h>tol;++i)
    {
        m=(a+b)/2;
        h=fabs(m-a);
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