#include<stdio.h>
int main()
{
    int h,m,amt;
    scanf("%d%d",&h,&m);
    if (h>7)
    {
        printf("Max hr is 7");

    }
    else 
    {
        if(h>=5){
    
            amt=amt+200;
            h=h-5;
        }

    
        else{
        h=h*50+m;
        }
    }    
        printf("%d",amt);
    return 0;
}
