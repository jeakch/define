/*例：已知圆的半径，求圆的周长和面积
程序如下：*/
#include <stdio>
#define PI 3.1415926
int main()
{
    double r,l,s;
    printf("请输入圆的半径：")；
    scanf("%lf",&r);
    1=2*PI*r;
    s=PI**r;
    printf("圆的周长为%lf,圆的面积为%f\n",l,s);
    return 0;
}
