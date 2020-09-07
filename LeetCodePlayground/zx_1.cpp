#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int func() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> rec(m, vector<int>(n));//m ø∆£¨n »À
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &rec[i][j]);
		}
	}
	unordered_set<int> stu;
	vector<double> avg(m);
	for (int i = 0; i < m; i++)
	{
		int sum_scr = 0;
		for (int j = 0; j < n; j++)
		{
			sum_scr += rec[i][j];
		}
		double cur_avg = sum_scr / n;
		avg[i] = cur_avg;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (rec[i][j] >= avg[i] && !stu.count(j))
				stu.insert(j);
		}
	}
	cout << stu.size();
	return 0;
}