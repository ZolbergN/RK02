#include <iostream>
#include <math.h>

using namespace std;

struct node                 //Описание структуры
{
	int symbol;
	node *next;
};

int merge1()
{

}

int main()
{ 
	setlocale(LC_ALL, "rus");

	int x;
	node *head1, *elem1, *head2, *elem2, *head3, *elem3;
	cin >> x;
	head1 = 0;
	while (x != 0)
	{
		node*elem1 = new(node);
		(*elem1).symbol = x;
		(*elem1).next = head1;
		head1 = elem1;
		cin >> x;
	}

	int x1;
	cin >> x1;
	head2 = 0;
	while (x1 != 0)
	{
		node*elem2 = new(node);
		(*elem2).symbol = x1;
		(*elem2).next = head2;
		head2 = elem2;
		cin >> x1;
	}

	cout << "Исходный список 1: " << endl;
	elem1 = head1;
	while (elem1 != 0)
	{
		cout << (*elem1).symbol << " ";
		elem1 = (*elem1).next;
	}
	cout << endl;

	cout << "Исходный список 2: " << endl;
	elem2 = head2;
	while (elem2 != 0)
	{
		cout << (*elem2).symbol << " ";
		elem2 = (*elem2).next;
	}
	cout << endl;

	head3 = 0;
	elem1 = head1;
	while (elem1 != 0)
	{
		node*elem3 = new(node);
		(*elem3).symbol = (*elem1).symbol;
		(*elem3).next = head3;
		head3 = elem3;
		elem1 = (*elem1).next;
	}

	elem2 = head2;
	while (elem2 != 0)
	{
		node*elem3 = new(node);
		(*elem3).symbol = (*elem2).symbol;
		(*elem3).next = head3;
		head3 = elem3;
		elem2 = (*elem2).next;
	}

	cout << "Склейка: " << endl;
	elem3 = head3;
	while (elem3 != 0)
	{
		cout << (*elem3).symbol << " ";
		elem3 = (*elem3).next;
	}

	system("pause");
	return 0;

}
