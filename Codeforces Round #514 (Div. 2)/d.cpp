#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#define N 1000010
using namespace std;
struct node{double x,y;}b[N],O,lst;
double R;
double sqr(double x){return x*x;}
double dis(node x,node y)
{
    return sqrt(sqr(x.x-y.x)+sqr(x.y-y.y));
}
bool incircle(node x)
{
    if(dis(O,x)<=R) return true;
    return false;
}
node solve(double a,double b,double c,double d,double e,double f)
{
    double y=(f*a-c*d)/(b*d-e*a);
    double x=(f*b-c*e)/(a*e-b*d);
    node res;
    res.x=x;
    res.y=y;
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n;i++)
    	scanf("%lf%lf",&b[i].x,&b[i].y);
    random_shuffle(b+1,b+n+1);
    R=0;
    for(i=1;i<=n;i++)
    if(!incircle(b[i]))
    {
        O.x=b[i].x;O.y=b[i].y;R=0;
        for(j=1;j<i;j++)
        if(!incircle(b[j]))
        {
            O.x=(b[i].x+b[j].x)/2;
            O.y=(b[i].y+b[j].y)/2;
            R=dis(O,b[i]);
            for(k=1;k<j;k++)
            if(!incircle(b[k]))
            {
                O=solve(b[i].x-b[j].x,b[i].y-b[j].y,(sqr(b[j].x)+sqr(b[j].y)-sqr(b[i].x)-sqr(b[i].y))/2,b[i].x-b[k].x,b[i].y-b[k].y,(sqr(b[k].x)+sqr(b[k].y)-sqr(b[i].x)-sqr(b[i].y))/2);
                R=dis(b[i],O);
            }
        }
    }
    if((O.y+R)*(O.y-R)<0)printf("-1\n");
    else
    {
	    lst.x=O.x,lst.y=0;
	    O.y=(lst.y+O.y+R)/2;
	    R=O.y;
		printf("%.9lf\n",R);
	}
    
    //printf("%.10lf\n%.10lf %.10lf",R,O.x,O.y);
}
