#include<stdio.h>
int main(){
    int n,i,j,m,space;
    printf("The number of rows are:");
    scanf("%d",&n);
    i=1;
    while(i==1){
        j=1;
        while(j<=(2*n)-1){
            printf("*");
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    i=2;
    while(i<=n){
        j=1;
        while(j<=n-i+1){
            printf("*");
            j=j+1;
        }
        space=1;
        while(space<=(2*(i-1))-1){
            printf(" ");
            space=space+1;
        }
        m=1;
        while(m<=n-i+1){
            printf("*");
            m=m+1;
        }
        printf("\n");
        i=i+1;
    }
    return 0;
}