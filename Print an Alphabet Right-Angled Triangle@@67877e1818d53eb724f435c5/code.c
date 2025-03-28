// Your code here...
#include<stdio.h>
int main() {
    int i,j,n;
    char z='A';
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        int formula=i;
        for(j=1;j<=formula;j++){
            printf("%c",z);
            z++;

        }
        printf("\n");
    }
}