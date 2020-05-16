#include "stdafx.h"
#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int numSquares()
{
	int n = 24;
	queue<int> sq;
	queue<int> n_cur;
	int step = 0;
	int sum = 0;
	int n_sqrt = sqrt(n);
	for (int i = n_sqrt; i >= 1; i--)
	{
		sq.push(pow(i, 2));
		n_cur.push(n);
	}
	sq.push(-1);
	while (!sq.empty())
	{

		int cur = sq.front();
		if (cur == -1)
		{
			sq.pop();
			step++;
			sq.push(-1);
			cur = sq.front();
		}
		int m = n_cur.front();
		int delt = m - cur;
		sq.pop();
		n_cur.pop();
		if (delt == 0)
			return step;
		int delt_squr = sqrt(delt);
		delt_squr = (delt_squr<sqrt(cur)) ? delt_squr : sqrt(cur);
		for (int i = delt_squr; i >= 1; i--)
		{
			sq.push(pow(i, 2));
			n_cur.push(m - cur);
		}

	}
	return 0;
}