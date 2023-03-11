#include<stdio.h>
int main(){
    int i,j,n,space,m;
    printf("The number of rows are:");
    scanf("%d",&n);
    i=1;
    while(i==1){
        j=1;
        while(j<=(2*n)-1){
            printf("%d ",j);
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    i=1;
    while(i<=n-1){
        j=1;
        while(j<=n-i){
            printf("%d ",j);
            j=j+1;
        }
        space=1;
        while(space<=(2*i)-1){
            printf("  ");
            space=space+1;
        }
        m=(2*n)-(n-i);
        while(m<=(2*n)-1){
            printf("%d ",m);
            m=m+1;
        }
        printf("\n");
        i=i+1;
    }
    return 0;
}