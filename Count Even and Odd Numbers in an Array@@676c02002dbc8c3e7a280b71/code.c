// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[i];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int even=0;
    int odd=0;
    for(int i=0;i<n;i++) {
        if(arr[i]%2==0) {
            even++;
        }else{
            odd++
        }
    }
    printf("%d %d",even,odd);
}