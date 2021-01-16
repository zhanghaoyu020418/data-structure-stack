#pragma once
#include <iostream>
#include <stdlib.h>
#include <assert.h>//����ͷ�ļ�
using namespace std;

#ifndef STACK_H
#define STACK_H


#define STACK_SIZE_MAX 10  //��Ϊջ��FILO�������������ջ��size�Ļ���ջ�׵�Ԫ�س�ջ�ͺ���
typedef int Type;

typedef struct Stack
{
	Type data[STACK_SIZE_MAX];
	int top;                  //��¼ջ��Ԫ�ص�λ��
}stack;

/*ջ�Ĺ�������*/

//ջ�ĳ�ʼ��
stack* stack_init();

//Ԫ�س�ջ����
void stack_pop(stack*st);

//Ԫ����ջ����
void stack_push(stack*st, Type val);

//��ȡջ��Ԫ��
Type stack_gettop(stack*st);

//�ж�ջ�Ƿ�Ϊ��
bool stack_empty(stack*st);

//�ж�ջ�Ƿ�����
bool stack_full(stack*st);


#endif // !STACK_H


