// Your code here...
#include<stdio.h>
int main() {
    int i,j,n,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int formula=n-i+1;
        for(j=1;j<=formula;j++){
            printf( "%d ",j);

        }
        printf("\n");
    }
}