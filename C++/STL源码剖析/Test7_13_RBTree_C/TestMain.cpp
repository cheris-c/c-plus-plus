#include<iostream>
#include<assert.h>
#include"rb_tree.h"
using namespace std;

void main()
{
	int ar[] = {100, 70, 80, 50, 40, 75, 73, 72, 74};            

	int n = sizeof(ar) / sizeof(int);
	RBTree rb;
	InitRBTree(rb);

	for(int i=0; i<n; ++i)
	{
		Insert(rb, ar[i]);
	}
	Remove(rb, 50);
	return ;
}