#pragma once//防止头文件重复包含
//pragma once 只有在VS中，万一开发工具不同就会失效
#ifndef QUEUE_H//防止头文件重复包含
#define QUEUE_H

typedef int Type;

//链表结点的声明
typedef struct node
{
	Type data;
	node *next;
}Node;


//队列结构的声明
typedef struct queue
{
	Node *front;
	Node *rear;
}Queue;

/*队列功能的实现*/

//队列单链表的初始化
Queue *queue_init();

//队列结点的初始化
Node *node_init(Type val);

//队列入队函数
void queue_push(Queue* q, Type val);

//队列出队函数
Type queue_pop(Queue* q);

//返回队列队首元素
Type queue_getfront(Queue* q );

//返回队列队尾元素
Type queue_getrear(Queue* q );

//检查队列是否为空
bool queue_empty(Queue* q );
 


#endif
