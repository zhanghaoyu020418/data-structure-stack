#pragma once//��ֹͷ�ļ��ظ�����
//pragma once ֻ����VS�У���һ�������߲�ͬ�ͻ�ʧЧ
#ifndef QUEUE_H//��ֹͷ�ļ��ظ�����
#define QUEUE_H

typedef int Type;

//�����������
typedef struct node
{
	Type data;
	node *next;
}Node;


//���нṹ������
typedef struct queue
{
	Node *front;
	Node *rear;
}Queue;

/*���й��ܵ�ʵ��*/

//���е�����ĳ�ʼ��
Queue *queue_init();

//���н��ĳ�ʼ��
Node *node_init(Type val);

//������Ӻ���
void queue_push(Queue* q, Type val);

//���г��Ӻ���
Type queue_pop(Queue* q);

//���ض��ж���Ԫ��
Type queue_getfront(Queue* q );

//���ض��ж�βԪ��
Type queue_getrear(Queue* q );

//�������Ƿ�Ϊ��
bool queue_empty(Queue* q );
 


#endif
