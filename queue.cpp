#define _CRT_SECURE_NO_WARNINGS 1
#include "queue.h"
#include <iostream>
#include <stdlib.h>
#include <assert.h>
using namespace std;

#define ERROR(str) cout << str <<"  �ļ�·��:> "<<__FILE__<<"����:> "<<__FUNCTION__<<"����:> "<<__LINE__<<endl
//��һ���궨������ʧ�ܵ�ԭ��������

//���е�����ĳ�ʼ��
Queue *queue_init()
{
	Queue*temp = (Queue*)malloc(sizeof(Queue));
	if (temp == NULL)
	{
		ERROR("���е������ʼ��ʧ�ܣ�");
	}
	assert(temp);//������д�ĺ궨��һ����Ч��

	temp->front = NULL;//ÿ��ָ�붼Ҫ��ʼ��
	temp->rear = NULL;

	return temp;
}

//���н��ĳ�ʼ��
Node *node_init(Type val)
{
	Node *temp = (Node*)malloc(sizeof(Node));
	assert(temp);
	temp->data = val;  //����������ĳ�ʼ��
	temp->next = NULL; //����ָ����ĳ�ʼ��
	return temp;
}

//������Ӻ���
void queue_push(Queue* q, Type val)
{
	assert(q);
	
	if (q->front == NULL)
	{
		q->front = q->rear = node_init(val);//ֻ��һ��Ԫ�ض���Ҳ�Ƕ�β
	}

	else
	{
		q->rear->next = node_init(val);  //�´����Ľ�����µ�β��
		q->rear = q->rear->next;         //rearָ��ָ���µ�β��
	}
}

//���г��Ӻ���
Type queue_pop(Queue* q)//ͷɾ��//��frontָ��ָ��ڶ���Ԫ�أ�Ȼ���ͷŵ�һ��Ԫ�صĿռ�
{
	assert(q);
	assert(q->front);
	Node*temp ;
	temp = q->front;//����ʱָ��ָ��frontָ�룬�Ի�ȡͷָ���Ԫ�أ����ͷ�
	Type val = temp->data;

	q->front = q->front->next;//�ڶ�������Ϊ�µĶ���
	free(temp);

	temp = NULL;//����temp��һ��Ұָ��
	return val;
}

//���ض��ж���Ԫ��
Type queue_getfront(Queue* q)
{
	assert(q);
	assert(q->front);

	return q->front->data;
}

//���ض��ж�βԪ��
Type queue_getrear(Queue* q)
{
	assert(q);
	assert(q->rear);

	return q->rear->data;
}

//�������Ƿ�Ϊ��
bool queue_empty(Queue* q)
{
	//if (q->front == q->rear == NULL)
	//{
	//	return true;
	//}
	//else
	//	return false;

	assert(q);
	return q->front == q->rear == NULL;//ֱ��һ�仰
}
