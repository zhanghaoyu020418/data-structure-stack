#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//ջ�ĳ�ʼ��
stack* stack_init()
{
	stack*temp = (stack*)malloc(sizeof(stack));
	assert(temp);

	temp->top = -1;
	return temp;
}

//Ԫ�س�ջ����
void stack_pop(stack*st)
{
	assert(st);
	assert(!stack_empty(st));
	st->top--;
}

//Ԫ����ջ����
void stack_push(stack*st, Type val)
{
	assert(st);
	assert(!stack_full(st));
	st->data[++st->top] = val;

}

//��ȡջ��Ԫ��
Type stack_gettop(stack*st)
{
	assert(st);
	assert(!stack_empty(st));
	return st->data[st->top];
}

//�ж�ջ�Ƿ�Ϊ��
bool stack_empty(stack*st)
{
	assert(st);
	return st->top == -1;//ջ����
}

//�ж�ջ�Ƿ�����
bool stack_full(stack*st)
{
	assert(st);
	return st->top >= STACK_SIZE_MAX;//ջ����
}