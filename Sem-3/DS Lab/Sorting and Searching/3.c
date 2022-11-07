#include<stdio.h>
int n;
void recurQuick(int *a,int start,int end){
    if(end<=start){return;}
    int pivot = partition(a,start,end);
    recurQuick(a,start,pivot-1);
    recurQuick(a,pivot+1,end);
}
int partition(int *a,int start,int end){
    int i=start-1,j=start,pivot=a[end];
    for(j=start;j<n;j++){
        if(a[j]<pivot){
            i++;
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    i++;
    int temp=a[i];
    a[i]=a[end];
    a[end]=temp;
    return i;
}
void iterateQuick(int *a,int start,int end){
    int stack[end - start + 1];
    int top = 0;
    stack[top] = start;
    top++;
    stack[top] = end;
    while (top >= 0) {
        end= stack[top];
        top--;
        start = stack[top];
        top--;
        int pivot = partition(a, start, end);
        if (pivot - 1 > start) {
            top++;
            stack[top] = start;
            top++;
            stack[top] = pivot - 1;
        }
        if (pivot + 1 < end) {
            top++;
            stack[top] = pivot + 1;
            top++;
            stack[top] = end;
        }
    }
}
void main(){
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    recurQuick(a,0,n-1);
    printf("After recursive quick sort : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    iterateQuick(a,0,n-1);
    printf("After iterative quick sort : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}