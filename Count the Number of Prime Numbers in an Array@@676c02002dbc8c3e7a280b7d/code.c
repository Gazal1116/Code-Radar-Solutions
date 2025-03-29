// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[n])
    }
    int prime=0;
    for(j=0;j<n;j++) {

         if (arr[j]>1){
             int count=0;
             for (int i=2;i<arr[j];i++){
                 if (arr[j]%i==0){
                     count+=1;
                     break;
                 }
             }
             if (count==0){
                 prime+=1;
             }
    }

     printf("%d",prime);

}