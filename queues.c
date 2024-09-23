#include <stdio.h>
# define SIZE 5

void enqueue(int);
void dequeue();
void display();

int items[SIZE], front = -1, rear = -1;

int main()
{
	dequeue();

	enqueue(1);
	enqueue(23);
	enqueue(12);
	enqueue(7);
	enqueue(8);

	enqueue(3);
	dequeue();

	display();
	return  0;
}

void enqueue(int value)
{
	if (rear == SIZE - 1)
	printf("\n Queue is full!!");
	else{
		if(front == -1)
		front = 0;
		rear++;
		items[rear] = value;
		printf("\n Inserted -> %d", value);
	}
}

void dequeue()
{
	if (front == -1)
	printf("\n Queue is empty!!");
	else{
		printf("\n Deleted  : %d", items[front]);
		front++;
		if (front > rear)
		front = rear -1;
	}
}

void display()
{
	if (rear == -1)
	printf("\n Queue is empty!!");
	else{
		int i;
		printf("\n Queue elements are : \n");
		for ( i = front; i <= rear; i++){
			printf("%d ", items[i]);
		}
	}
	printf("\n");
}
