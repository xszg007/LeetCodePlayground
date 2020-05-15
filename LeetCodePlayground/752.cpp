#include "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;

int openLock()
{
	string target = "0202";
	vector<string> deadends = { "0201","0101","0102","1212","2002" };
	if ("0000" == target)
		return 0;
	vector<string>::iterator it_zero = find(deadends.begin(), deadends.end(), "0000");
	if (it_zero != deadends.end())
		return -1;
	bool targ_f = 0;
	for (int i = 0; i<4; i++)
	{
		string target_n = target;
		if (target_n[i] == '9')
		{
			target_n[i] = '0';
		}
		else {
			target_n[i]++;
		}
		vector<string>::iterator it_tag = find(deadends.begin(), deadends.end(), target_n);
		if (it_tag != deadends.end())
		{
			continue;
		}
		else
			targ_f = 1;
	}
	for (int i = 0; i<4; i++)
	{
		string target_n = target;
		if (target_n[i] == '0')
		{
			target_n[i] = '9';
		}
		else {
			target_n[i]--;
		}
		vector<string>::iterator it_tag = find(deadends.begin(), deadends.end(), target_n);
		if (it_tag != deadends.end())
		{
			continue;
		}
		else
			targ_f = 1;
	}
	if (!targ_f)
		return -1;
	queue<string> unl;
	unl.push("0000");
	unl.push("round");
	int step = 1;
	vector<string> hslst;
	while (!unl.empty())
	{
		if (unl.front() == "round")
		{
			step++;
			unl.pop();
		}
		string cur = unl.front();
		unl.pop();
		string cur_n;
		for (int i = 0; i<4; i++)
		{
			cur_n = cur;
			if (cur_n[i] == '9')
			{
				cur_n[i] = '0';
			}
			else
			{
				cur_n[i] = cur_n[i] + 1;
			}
			if (cur_n == target)
			{
				return step;
			}
			else
			{
				vector<string>::iterator it = find(deadends.begin(), deadends.end(), cur_n);
				if (it != deadends.end())
				{
					continue;//
				}
				vector<string>::iterator it_hs = find(hslst.begin(), hslst.end(), cur_n);
				if (it_hs != hslst.end())
				{
					continue;
				}
				unl.push(cur_n);
				hslst.push_back(cur_n);
			}
		}
		for (int i = 0; i<4; i++)
		{
			cur_n = cur;
			if (cur_n[i] == '0')
			{
				cur_n[i] = '9';
			}
			else
			{
				cur_n[i] = cur_n[i] - 1;
			}

			if (cur_n == target)
			{
				return step;
			}
			else
			{
				vector<string>::iterator it = find(deadends.begin(), deadends.end(), cur_n);
				if (it != deadends.end())
				{
					continue;
				}
				vector<string>::iterator it_hs = find(hslst.begin(), hslst.end(), cur_n);
				if (it_hs != hslst.end())
				{
					continue;
				}
				unl.push(cur_n);
				hslst.push_back(cur_n);
			}
		}
		if (unl.front() == "round")

			unl.push("round");
	}
	return -1;
}