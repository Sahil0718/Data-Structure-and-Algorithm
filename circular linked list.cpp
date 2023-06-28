#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

struct circularqueue {
    int item[SIZE];
    int front;
    int rear;
};

typedef struct circularqueue cqueue;

void enqueue(cqueue*);
void dequeue(cqueue*);
void display(cqueue);

int main() {
    cqueue cq;
    cq.rear = SIZE - 1;
    cq.front = SIZE - 1;
    int choice;

    do {
        printf("\n---------Menu--------\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue(&cq);
                break;

            case 2:
                dequeue(&cq);
                break;

            case 3:
                display(cq);
                break;

            case 4:
                printf("Quitting... Press any key to exit.");
                getchar(); // Consume the newline character
                getchar(); // Wait for any key press
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

void enqueue(cqueue* cq) {
    if ((cq->rear + 1) % SIZE == cq->front) {
        printf("Queue is full\n");
    } else {
        int x;
        printf("Enter data to insert: ");
        scanf("%d", &x);
        cq->rear = (cq->rear + 1) % SIZE;
        cq->item[cq->rear] = x;
    }
}

void dequeue(cqueue* cq) {
    if (cq->front == cq->rear) {
        printf("Queue is empty\n");
    } else {
        cq->front = (cq->front + 1) % SIZE;
        printf("The deleted element is %d\n", cq->item[cq->front]);
    }
}

void display(cqueue cq) {
    if (cq.front == cq.rear) {
        printf("Queue is empty\n");
    } else {
        printf("The elements of the queue are: ");
        int i = (cq.front + 1) % SIZE;
        while (i != (cq.rear + 1) % SIZE) {
            printf("%d\t", cq.item[i]);
            i = (i + 1) % SIZE;
        }
        printf("\n");
    }
}

