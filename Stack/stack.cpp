#include"stack.h"
#include<iostream>
using namespace std;
stack::stack()
{
	this->top = NULL;
	size = 0;
}
stack ::~stack()
{
	if (this->size != 0)
		pop();
}
void stack::push(int x)
{
	size++;
	node *p = top;
	top = new node;
	top->data = x;
	top->next =p;
}
int stack::pop()//ham lay ra 1 phan tu trong ngan xep
{
	if (isEmpty()) return -1;//neu ngan nho rong thi tra ve -1
	else
	{
		size--;//giam kich co size xuong 1 don vi
		node *p = top;//gan con tro p bang dinh ngan xep
		int item = top ->data ;//cho item nhan gia tri item cua node top
		top = top -> next;//gan top cho node next cua top
		return item;//tra ve gia tri item
	}
}
bool stack::isEmpty()//ham kiem tra ngan xep co rong hay khong
{
	return (this ->size == 0);//tra ve true neu size=0
}
int stack::soluongphantu()//ham tra ve so luong phan tu trong ngan xep
{
	return (this-> size);//tra ve size cua ngan xep
}
void stack::print()//ham in cac phan tu trong ngan xep
{
	node *p = top;// gan con tro p tro den dinh cua ngan xep
	while (p != NULL)//trong khi dinh ngan xep khac rong
	{
		cout << p->data << endl;//in ra item cua node
		p = p->next;//gan p bang next cua node p
	}
}