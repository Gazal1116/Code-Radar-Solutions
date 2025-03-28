// Your code here...
int fibnocci(int n) {
    int a=0,b=1;
    for(i=1;i<=n;i++) {
        printf("%d ", a);
        int next=a+b;
        a=b;
        b=next;

    }
}