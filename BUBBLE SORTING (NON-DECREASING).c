/*
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks_DSA;
};

void display(struct Student *s) {
    printf("Student Detail:\n");
    printf("Roll no. %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("Marks in DSA: %.2f\n", s->marks_DSA);
}

void inputData(struct Student *s, int i) {
    printf("Enter details [%d]:\n", i);
    printf("Enter the roll number: ");
    scanf("%d", &s->roll);

    printf("Enter the name of the student: ");
    scanf("%s", s->name);

    printf("Enter the marks of DSA: ");
    scanf("%f", &s->marks_DSA);
}

int ispass(struct Student *s) {
    return (s->marks_DSA < 30) ? 1 : 0;
}

int main() {
    struct Student *ptr;
    int N, i;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    ptr = (struct Student*)malloc(N * sizeof(struct Student));

    for (i = 0; i < N; i++) {
        inputData(ptr + i, i + 1);
    }

    for (i = 0; i < N; i++) {
        if (ispass(ptr + i)) {
            display(ptr + i);
        }
    }

    free(ptr);
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
int temp,i,j;
bubbleSort(int A[20], int n){
for( i = 0; i<n-1; i++){
    for( j = 0; j<n-i-1; j++){
        if(A[j]>A[j+1]){ //index value must be smaller
 temp = A[j];
 A[j] = A[j+1];
 A[j + 1] = temp;
        }
    }
}
}

int main(){
int A[20],n,i;
printf("ENTER THE N VALUE:");
scanf("%d", &n);
printf("ENTER THE DATA ITEMS: \n");
for(i=0; i<n; i++){
    scanf("%d", &A[i]);
}
printf("THE VALUES AFTER DATA SORTED IN NON_DECREASING WAY IS: \n");
bubbleSort(A,n);
for(i = 0; i<n; i++){
    printf("%d\t",A[i]);
}
free(A);
return 0;
}
