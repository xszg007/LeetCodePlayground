#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int funczx2() {
	int T;
	cin >> T;
	vector<int> l;
	vector<vector<int>> rec;
	for (int i = 0; i < T; i++)
	{
		int cur_l;
		cin >> cur_l;
		l.push_back(cur_l);
		vector<int> cur_rec(cur_l);
		for (int j = 0; j < cur_l; j++)
		{
			scanf_s("%d", &cur_rec[j]);
		}
		rec.push_back(cur_rec);
	}

	for (auto c_rec : rec)
	{
		vector<int> cur_num;
		int cur_len = c_rec.size();
		for (int i = 0; i < cur_len; i++)
		{
			if (i<cur_len - 1 && c_rec[i]>c_rec[i + 1])
			{
				cur_num.push_back(i);
			}

		}
		for (int j = 0; j < cur_num.size(); j++)
		{
			for (int k = 0; k < cur_num[j]; k++)
			{

			}
		}
	}
	return 0;
}