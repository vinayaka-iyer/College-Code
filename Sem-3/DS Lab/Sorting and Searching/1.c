#include<stdio.h>
int n;
void insertionSort(int *a,int i){
    if(i<=0){return;}
    if(a[i]<a[i-1]){
        a[i]+=a[i-1];
        a[i-1]=a[i]-a[i-1];
        a[i]-=a[i-1];
        i--;
        insertionSort(a,i);
    }
}
void bubbleSort(int *a){
    for(int i=0;i<n;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swapped=1;
                a[j]+=a[j-1];
                a[j-1]=a[j]-a[j-1];
                a[j]-=a[j-1];
            }
            if(swapped==1){break;}
        }
        if(swapped==1){break;}
    }
}
void selectionSort(int *a){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            a[i]+=a[min];
            a[min]=a[i]-a[min];
            a[i]-=a[min];
        }
    }
}
int linearSearch(int *a,int val){
    for(int i=0;i<n;i++){
        if(a[i]==val){
            return i;
        }
    }
    return -1;
}
int binarySearch(int *a,int val){
    int max=n-1,min=0,mid;
    while(max>=min){
        mid=(max+min)/2;
        if(val==a[mid]){return mid;}
        else if(val>a[mid]){
            min=mid+1;
        }
        else{
            max=mid-1;
        }
    }
    return -1;
}
void main(){
    int i,val;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter element to search : ");
    scanf("%d",&val);
    printf("Given Array : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(i=1;i<n;i++){
        insertionSort(a,i);
    }
    printf("\nThrough insertion sort : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nThrough bubble sort : ");
    bubbleSort(a);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nThrough selection sort : ");
    selectionSort(a);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nThrough linear search : ");
    int check=linearSearch(a,val);
    if(check==-1){printf("Element not found");}
    else{printf("Element found at index %d",check);}
    printf("\nThrough binary search : ");
    check=binarySearch(a,val);
    if(check==-1){printf("Element not found");}
    else{printf("Element found at index %d",check);}
}