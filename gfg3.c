#include<stdio.h>
int main(){
    int i,j,n;
    printf("The number of rows are:");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        j=n-i;
        while(j>=0){
            printf("%d ",j);
            j=j-1;
        }
        printf("\n");
        i=i+1;
    }

    return 0;

}