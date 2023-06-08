#include <stdio.h>
#include <math.h>

double dis(double x1,double x2,double y1,double y2){
    double dist;
    dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return dist;
}

void main(){
    double x1,x2,x3,y1,y2,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double d1,d2,d3;
    d1=dis(x1,x2,y1,y2);
    d2=dis(x3,x2,y3,y2);
    d3=dis(x1,x3,y1,y3);

}