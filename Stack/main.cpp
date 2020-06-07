#include<iostream>
#include "stack.h"
using namespace std;
int main()
{
	int chon;
	int da;
	int x;
	stack p;
	do
	{
		cout << "chuc nang" << endl;
		cout << "1.them phan tu vao" << endl;
		cout << "2.lay phan tu ra" << endl;
		cout << "3.in ra danh sach cac phan tu:" << endl;
		cout << "0.thoat!" << endl <<endl;
		cout << "chon chuc nang:";
		cin >> chon;
		switch (chon)
		{
		case 1:
		{
			cout << "nhap gia tri:";
			cin >> x;
			p.push(x);
			break;

		}
		case 2:
		{
			p.pop();
			break;
		}
		case 3:
		{
			p.print();
			break;
		}
		case 0:
		{
			break;
		}
		break;
		}
	} while (chon != 0);
	return 0;
}