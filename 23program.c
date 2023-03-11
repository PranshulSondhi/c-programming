#include<stdio.h>
int main(){
    int n,i,j,m,space;
    printf("The number of rows are:");
    scanf("%d",&n);
    i=1;
    while(i==1){
        j=1;
        while(j<=n){
            printf("%d",j);
            j=j+1;
        }
        j=1;
        while(j<=n-1){
            printf("%d",n-j);
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    i=1;
    while(i<=n-1){
        j=1;
        while(j<=n-i){
            printf("%d",j);
            j=j+1;
        }
        space=1;
        while(space<=2*i-1){
            printf(" ");
            space=space+1;
        }
        j=n-i;
        while(j>=1){
            printf("%d",j);
            j=j-1;
        }
        printf("\n");
        i=i+1;
    }
    return 0;
}