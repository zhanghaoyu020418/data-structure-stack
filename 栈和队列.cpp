#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "queue.h"
#include "stack.h"
#include <stdlib.h>
using namespace std;

void queue_test()
{
	Queue* q = queue_init();
	Type val;

	int num = 0;
	do
	{
		cin >> val;
		queue_push(q, val);
		num++;
	} while (getchar() != '\n');

	cout << queue_getfront(q) << '\t';
	cout << queue_getrear(q) << endl;

	if (queue_empty(q))
	{
		cout << "队列为空！" << endl;
	}

}

void stack_test()
{
	stack*st = stack_init();  //提示：STACK_SIZE_MAX = 10
	if (stack_empty)
	{
		cout << "栈为空！" << endl;
	}
	cout << endl;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		stack_push(st, i);
	}

	if (stack_full)
	{
		cout << "栈满了" << endl;
	}
	cout << endl;

	cout << stack_gettop(st);
	for (i = 9; i >= 7; i--)
	{
		stack_pop(st);
	}
	cout << stack_gettop(st);	
	

}

int main()
{
	stack_test();
	return 0;
}