/*main file to test implementation of Static Queue functions*/

#include<stdio.h>

#ifndef STATIC_QUEUE_C
#include "StaticQueue.c"
#endif

#ifndef STATIC_QUEUE_H
#include "StaticQueue.h"
#endif

#define PRINT_QUEUE printf("\nFront->");\
					for(int i=Queue.front;i<=Queue.rear;i++) printf("%d->",Queue.data[i]);\
					printf("Rear\n")\

int main(void)
{
	int status,data;
	sQueue_t Queue;
	
	QueueInit(&Queue);
	
	enque(&Queue,10);
	enque(&Queue,20);
	enque(&Queue,30);
	
	PRINT_QUEUE;
	
	status=peek(&Queue,&data);
	if(status) printf("\nPeeked data = %d ",data);
	else printf("\nQueue is Empty.");
	
	status=peek(&Queue,&data);
	if(status) printf("\nPeeked data = %d ",data);
	else printf("\nQueue is Empty.");
	
	PRINT_QUEUE;
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	PRINT_QUEUE;
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	status=deque(&Queue,&data);
	if(status) printf("\ndequed data = %d ",data);
	else printf("\nQueue is Empty.");
	
	PRINT_QUEUE;
}