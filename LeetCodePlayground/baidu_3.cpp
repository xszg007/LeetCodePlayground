#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int func(int m, int n) {
	vector<int> step(n+1);
	step[0] = 0;
	step[1] = 1;
	step[2] = 1;
	if (m >= 3)
		step[3] = 3;
	else
		step[3] = 2;
	int cur_res = 0;
	for (int i = 3; i <=n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if ((i - 2 * j) >= 0) {
				cur_res += step[i - j] - step[i - 2 * j];
			}
			else
				cur_res += step[i - j];
		}
		step[i] = cur_res;
	}
	return step[n];

}