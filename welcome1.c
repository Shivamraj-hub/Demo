#include<stdio.h>
int main(){
    int n,i,a[100],num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(i=0;i<=n;i++){
            if(a[i]==num){
                printf("num");
            }
        }

    }
    return 0;
}