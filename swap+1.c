#include<stdio.h>
void change(int*,int*);
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("BEFORE :\n");
printf("a:%d\n",a);
printf("b:%d\n",b);
change(&a,&b);
printf("AFTER :\n");
printf("a:%d\n",a);
printf("b:%d\n",b);
    return 0;
}
void change(int*x,int*y){
    *x=*x+1;
    *y=*y+1;
}