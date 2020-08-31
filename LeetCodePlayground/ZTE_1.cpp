#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <vector>
#include <functional>
using namespace std;

int arithmetic()
{
	int g;
	cin >> g;
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int st = a[0];
	int ed = a[n - 1];
	vector<vector<int>> p;
	for (int i = -1; i < 2; i++)
	{
		for (int j = -1; j < 2; j++)
		{
			if ((ed + j - st - i) % (n - 1) == 0)
			{
				vector<int> pi = { st + i,ed + j };
				p.push_back(pi);
			}
		}
	}
	for (int i = 0; i < p.size(); i++)
	{
		for (int j = 0; j < a.size(); j++)
		{
			//if point outside line area(>1 or <-1)
			//if not on line but in area,count ++;
			//break;p.erase(i);i--;
		}
	}
	if (p.size() == 0)
		return -1;
	//sort(count)
	//return sort[0];
	return 0;
}