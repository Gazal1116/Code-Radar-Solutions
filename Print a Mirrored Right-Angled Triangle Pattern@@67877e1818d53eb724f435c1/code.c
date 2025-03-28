// Your code here...
#include<stdio.h>
int main() {
    int i,n,j;
    scanf("%d", &n);
    for (i=0;i<n;i++) {

        for (j=1;j<=n-i-1;j++) {
            printf(" ");
        }
        for (j=1;j<=n-i-2;j++) {
            printf("*");
        }
        printf("\n");
    }
}