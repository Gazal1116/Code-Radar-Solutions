// Your code here...
int findUnsortedSubarray(int arr[],int n) {
    for(i=0;i<n-1;i++) {
        int k=0;
        for(j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            k++;
   
        }
    }
} 
return k;
}