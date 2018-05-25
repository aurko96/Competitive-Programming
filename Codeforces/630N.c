#include<stdio.h>
#include<math.h>
int main()
{
    double x,y;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    x=(-b+sqrt(b*b-4*a*c))/(2*a);
    y=(-b-sqrt(b*b-4*a*c))/(2*a);
    if(x>y) printf("%lf \n%lf",x,y);
    else printf("%lf \n%lf",y,x);

}

/*#include<stdio.h>
#include<math.h>
int main()

{
    int a,b,c;
    double x,y;

    scanf("%d %d %d",&a,&b,&c);

    x=(-b+sqrt(b*b-4*a*c))/(2*a);
    y=(-b-sqrt(b*b-4*a*c))/(2*a);

    if(x>y) printf("%lf \n%lf",x,y);
    else printf("%lf \n%lf",y,x);

    return 0;
}*/
