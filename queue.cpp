#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"
#include <iostream>
#include <stdlib.h>
#include <assert.h>
using namespace std;

#define ERROR(str) cout << str <<"  文件路径:> "<<__FILE__<<"函数:> "<<__FUNCTION__<<"行数:> "<<__LINE__<<endl
//用一个宏定义来让失败的原因更加清楚

//队列单链表的初始化
Queue *queue_init()
{
	Queue*temp = (Queue*)malloc(sizeof(Queue));
	if (temp == NULL)
	{
		ERROR("队列单链表初始化失败！");
	}
	assert(temp);//和上面写的宏定义一样的效果

	temp->front = NULL;//每个指针都要初始化
	temp->rear = NULL;

	return temp;
}

//队列结点的初始化
Node *node_init(Type val)
{
	Node *temp = (Node*)malloc(sizeof(Node));
	assert(temp);
	temp->data = val;  //结点的数据域的初始化
	temp->next = NULL; //结点的指针域的初始化
	return temp;
}

//队列入队函数
void queue_push(Queue* q, Type val)
{
	assert(q);
	
	if (q->front == NULL)
	{
		q->front = q->rear = node_init(val);//只有一个元素队首也是队尾
	}

	else
	{
		q->rear->next = node_init(val);  //新创建的结点是新的尾部
		q->rear = q->rear->next;         //rear指针指向新的尾部
	}
}

//队列出队函数
Type queue_pop(Queue* q)//头删法//让front指针指向第二个元素，然后释放第一个元素的空间
{
	assert(q);
	assert(q->front);
	Node*temp ;
	temp = q->front;//让临时指针指向front指针，以获取头指针的元素，并释放
	Type val = temp->data;

	q->front = q->front->next;//第二个结点成为新的队首
	free(temp);

	temp = NULL;//避免temp是一个野指针
	return val;
}

//返回队列队首元素
Type queue_getfront(Queue* q)
{
	assert(q);
	assert(q->front);

	return q->front->data;
}

//返回队列队尾元素
Type queue_getrear(Queue* q)
{
	assert(q);
	assert(q->rear);

	return q->rear->data;
}

//检查队列是否为空
bool queue_empty(Queue* q)
{
	//if (q->front == q->rear == NULL)
	//{
	//	return true;
	//}
	//else
	//	return false;

	assert(q);
	return q->front == q->rear == NULL;//直接一句话
}
