#pragma once
#include <iostream>
#include <stdlib.h>
#include <assert.h>//断言头文件
using namespace std;

#ifndef STACK_H
#define STACK_H


#define STACK_SIZE_MAX 10  //因为栈是FILO所以如果不限制栈的size的话，栈底的元素出栈就很慢
typedef int Type;

typedef struct Stack
{
	Type data[STACK_SIZE_MAX];
	int top;                  //记录栈顶元素的位置
}stack;

/*栈的功能声明*/

//栈的初始化
stack* stack_init();

//元素出栈函数
void stack_pop(stack*st);

//元素入栈函数
void stack_push(stack*st, Type val);

//获取栈顶元素
Type stack_gettop(stack*st);

//判断栈是否为空
bool stack_empty(stack*st);

//判断栈是否已满
bool stack_full(stack*st);


#endif // !STACK_H


