#include<stdio.h>
int main(){
    int i,j,n,space;
    printf("The number of rows are:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            printf("*");
            j=j+1;
        }
        space=1;
        while(space<=2*(n-i)+1){
            printf(" ");
            space=space+1;
        }
         j=1;
        while(j<=i){
            printf("*");
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    i=1;
    while(i<=n){
        j=n-i+1;
        while(j>=1){
            printf("*");
            j=j-1;
        }
        space=1;
        while(space<=(2*i)-1){
            printf(" ");
            space=space+1;
        }
         j=n-i+1;
        while(j>=1){
            printf("*");
            j=j-1;
        }
        printf("\n");
        i=i+1;
        
    }

    return 0;

}