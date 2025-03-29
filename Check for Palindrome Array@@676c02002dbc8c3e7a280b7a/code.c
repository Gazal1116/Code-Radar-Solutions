
// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=1;
    for(j=1;j<n-j-1;j++) {
        if(arr[j]!= arr[n-j-1]) {
            k=0;
            break;
        }
    }
    if(k=1) {
        printf("Yes");
    }else{
        printf("No");
    }
}