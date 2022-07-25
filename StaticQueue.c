/*Implementation of Static Queue header file functions*/

#define STATIC_QUEUE_C

#ifndef STATIC_QUEUE_H
#include "StaticQueue.h"
#endif

void QueueInit(sQueue_t *Queue)
{
	Queue->front=0;
	Queue->rear=-1;
}
int isFull(sQueue_t *Queue)
{
	return(Queue->rear == QUEUE_SIZE-1);
}
int isEmpty(sQueue_t *Queue)
{
	int status=0;
	if(Queue->front > Queue->rear)
	{
		status=1;
		QueueInit(Queue);
	}		
	return status;
}
int enque(sQueue_t *Queue,int data)
{
	int status =1;
	if(!isFull(Queue))
	{
		Queue->data[++(Queue->rear)] = data;
	}
	else status = 0;
	return status;
}
int deque(sQueue_t *Queue,int *data)
{
	int status =1;
	if(!isEmpty(Queue))
	{
		*data = Queue->data[(Queue->front)++];
	}
	else status = 0;
	return status;
}
int peek(sQueue_t *Queue,int *data)
{
	int status =1;
	if(!isEmpty(Queue))
	{
		*data = Queue->data[Queue->front];
	}
	else status = 0;
	return status;
}