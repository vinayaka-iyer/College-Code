#include<stdio.h>
#include<string.h>
int n;
struct student{
    int regn;
    char name[20],branch[20];
    float cgpa;
};
void insertionSort(struct student*students){
    char temp[20];
    for(int i=0;i<n-1;i++){
        if(students[i].cgpa<students[i+1].cgpa){
            for(int j=i;j>=0;j--){
                if(students[j].cgpa<students[j+1].cgpa){
                    students[j].regn+=students[j+1].regn;
                    students[j+1].regn=students[j].regn-students[j+1].regn;
                    students[j].regn-=students[j+1].regn;
                    students[j].cgpa+=students[j+1].cgpa;
                    students[j+1].cgpa=students[j].cgpa-students[j+1].cgpa;
                    students[j].cgpa-=students[j+1].cgpa;
                    strcpy(temp,students[j].branch);
                    strcpy(students[j].branch,students[j+1].branch);
                    strcpy(students[j+1].branch,temp);
                    strcpy(temp,students[j].name);
                    strcpy(students[j].name,students[j+1].name);
                    strcpy(students[j+1].name,temp);
                }
                else {break;}
            }
        }
    }
}
void bubbleSort(struct student*students){
    char temp[20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(students[j].regn>students[j+1].regn){
                students[j].regn+=students[j+1].regn;
                students[j+1].regn=students[j].regn-students[j+1].regn;
                students[j].regn-=students[j+1].regn;
                students[j].cgpa+=students[j+1].cgpa;
                students[j+1].cgpa=students[j].cgpa-students[j+1].cgpa;
                students[j].cgpa-=students[j+1].cgpa;
                strcpy(temp,students[j].branch);
                strcpy(students[j].branch,students[j+1].branch);
                strcpy(students[j+1].branch,temp);
                strcpy(temp,students[j].name);
                strcpy(students[j].name,students[j+1].name);
                strcpy(students[j+1].name,temp);
            }
        }
    }
}
int linearSearch(struct student *a,int regno){
    for(int i=0;i<n;i++){
        if(regno==a[i].regn){
            return i;
        }
    }
    return -1;
}
int binarySearch(struct student*students,int val){
    int max=n-1,min=0,mid;
    while(max>=min){
        mid=(max+min)/2;
        if(val==students[mid].regn){return mid;}
        else if(val>students[mid].regn){
            min=mid+1;
        }
        else{
            max=mid-1;
        }
    }
    return -1;
}
void main(){
    struct student students[10];
    int regno,check=-1;
    printf("Enter number of students : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter regn number for student %d : ",i+1);
        scanf("%d",&students[i].regn);
        printf("Enter name of student %d : ",i+1);
        scanf("%s",&students[i].name);
        printf("Enter branch of student %d : ",i+1);
        scanf("%s",students[i].branch);
        printf("Enter cgpa number for student %d : ",i+1);
        scanf("%f",&students[i].cgpa);
    }
    printf("Enter regn of a student : ");
    scanf("%d",&regno);
    check=linearSearch(students,regno);
    if(check==-1){printf("No such registration number exists\n");}
    else{
        printf("Details of required student : \n");
        printf("Regn : %d\n",students[check].regn);
        printf("Name : %s\n",students[check].name);
        printf("Branch : %s\n",students[check].branch);
        printf("Cgpa : %.2f\n",students[check].cgpa);
    }
    bubbleSort(students);
    printf("\nAfter using Bubble Sort : \n\n");
    for(int i=0;i<n;i++){
        printf("Regn number for student %d : %d\n",i+1,students[i].regn);
        printf("Name of student %d : %s\n",i+1,students[i].name);
        printf("Branch of student %d : %s\n",i+1,students[i].branch);
        printf("Cgpa number for student %d : %.2f\n",i+1,students[i].cgpa);
        printf("\n");
    }
    printf("Enter regn of a student : ");
    scanf("%d",&regno);
    check=binarySearch(students,regno);
    if(check==-1){printf("No such registration number exists\n");}
    else{
        printf("Details of required student : \n");
        printf("Regn : %d\n",students[check].regn);
        printf("Name : %s\n",students[check].name);
        printf("Branch : %s\n",students[check].branch);
        printf("Cgpa : %.2f\n",students[check].cgpa);
    }
    insertionSort(students);
    printf("\nThrough insertion sort (Descending CGPA): \n\n");
    for(int i=0;i<n;i++){
        printf("Regn number for student %d : %d\n",i+1,students[i].regn);
        printf("Name of student %d : %s\n",i+1,students[i].name);
        printf("Branch of student %d : %s\n",i+1,students[i].branch);
        printf("Cgpa number for student %d : %.2f\n",i+1,students[i].cgpa);
        printf("\n");
    }
}