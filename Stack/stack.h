#pragma once
#ifndef STACK_H
#define STACK_H
struct node
{
	int data;
	node *next;
};
class stack
{
public:
	stack();
	~stack();
	void push(int x);
	int pop();
	bool isEmpty();
	int soluongphantu();
	void print();
private:
	node *top;
	int size;

};
#endif // !STACK.H
