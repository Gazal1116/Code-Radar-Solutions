// Your code here...
void bubbleSort(int arr[] , int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-2;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int printArray(int arr[],int n) {
    for(int k=0;k<n;k++) {
    printf("%d ",arr[k]);   
    }
}