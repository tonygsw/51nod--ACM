/*
    data:2018.5.15
    author:gsw
    link:http://www.51nod.com/onlineJudge/questionCode.html#!problemId=1298
*/
#define ll long long
#define IO ios_with_sync(false);

#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<string.h>
using namespace std;
class Point
{
    public:
        double x,y;
};
Point p1,p2,p3;
double xc,yc,r;

int disline(Point a,Point b,Point c,double R)
{//判断在圆外的两点形成的线段是否与圆相交
    if(c.x==b.x)
    {//bc线段与x轴垂直
        if(abs(a.x-b.x)>R)//圆心到bc直线的距离大于半径则不相交
            return 0;
        else
        {//圆心到bc直线的距离小于半径
            if((b.y>a.y&&c.y>a.y)||(b.y<a.y&&c.y<a.y))//若两点y均大于（小于）圆心的y则不相交
                return 0;
            else//其余情况均相交
                return 1;
        }
    }
    else if(c.y==b.y)
    {//bc线段与y轴垂直，原理同与x轴垂直
        if(abs(a.y-b.y)>R)
            return 0;
        else
        {
            if((b.x<a.x&&c.x<a.x)||(b.x>a.x&&c.x>a.x))
                return 0;
            else
                return 1;
        }
    }
    else
    {
        Point d;//bc直线上圆心r的垂点
        double kbc=(b.y-c.y)/(b.x-c.x);//根据公式y=kx+b,kbc为bc直线的k，bbc为其中的b，kad、bad同理
        double bbc=b.y-kbc*b.x;
        double kad=-1/kbc;
        double bad=a.y-kad*a.x;
        d.x=(bad-bbc)/(kbc-kad);
        d.y=kbc*d.x+bbc;
        if(((a.x-d.x)*(a.x-d.x)+(a.y-d.y)*(a.y-d.y))>r*r)//圆心到直线bc的距离大于半径则不相交
            return 0;
        else
        {//圆心到直线bc的距离小于半径
            if((d.x>b.x&&d.x>c.x)||(d.x<b.x&&d.x<c.x))//垂点d不在线段bc上则不相交
                return 0;
            else//其余情况则相交
                return 1;
        }
    }

}
bool judge()
{
    if(((p1.x-xc)*(p1.x-xc)+(p1.y-yc)*(p1.y-yc))<r*r&&
        ((p2.x-xc)*(p2.x-xc)+(p2.y-yc)*(p2.y-yc))<r*r&&
        ((p3.x-xc)*(p3.x-xc)+(p3.y-yc)*(p3.y-yc))<r*r)return false;
    if(((p1.x-xc)*(p1.x-xc)+(p1.y-yc)*(p1.y-yc))>r*r&&
        ((p2.x-xc)*(p2.x-xc)+(p2.y-yc)*(p2.y-yc))>r*r&&
        ((p3.x-xc)*(p3.x-xc)+(p3.y-yc)*(p3.y-yc))>r*r)
    {
        Point R;R.x=xc;R.y=yc;
        if(!disline(R,p1,p2,r) && !disline(R,p1,p3,r) && !disline(R,p2,p3,r))
            return false;
    }
    return true;
}

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        cin>>xc>>yc>>r>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y;
        if(judge())printf("Yes\n");//cout<<"Yes"<<endl;
        else printf("No\n");//cout<<"No"<<endl;


    }
    return 0;
}
