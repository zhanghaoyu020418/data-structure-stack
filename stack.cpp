#define _CRT_SECURE_NO_WARNINGS 1
#include "stack.h"

//栈的初始化
stack* stack_init()
{
	stack*temp = (stack*)malloc(sizeof(stack));
	assert(temp);

	temp->top = -1;
	return temp;
}

//元素出栈函数
void stack_pop(stack*st)
{
	assert(st);
	assert(!stack_empty(st));
	st->top--;
}

//元素入栈函数
void stack_push(stack*st, Type val)
{
	assert(st);
	assert(!stack_full(st));
	st->data[++st->top] = val;

}

//获取栈顶元素
Type stack_gettop(stack*st)
{
	assert(st);
	assert(!stack_empty(st));
	return st->data[st->top];
}

//判断栈是否为空
bool stack_empty(stack*st)
{
	assert(st);
	return st->top == -1;//栈空了
}

//判断栈是否已满
bool stack_full(stack*st)
{
	assert(st);
	return st->top >= STACK_SIZE_MAX;//栈满了
}