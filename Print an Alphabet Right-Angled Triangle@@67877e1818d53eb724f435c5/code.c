// Your code here...
#include<stdio.h>
int main() {
    int i,j,n;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        char z='A';
        int formula=i;
        for(j=1;j<=formula;j++){
            printf("%c",z);
            z++;

        }
        printf("\n");
    }
    return 0;
}