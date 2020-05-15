#include "stdafx.h"
#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;

int openLock()
{
	string target = "0202";
	vector<string> deadends = { "0201","0101","0102","1212","2002" };
	if ("0000" == target)
		return 0;
	unordered_set<string>deads(deadends.begin(), deadends.end());
	unordered_set<string> hslst;
	hslst.insert("0000");
	if (deads.count("0000") != 0)
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
		if (deads.count(target_n) != 0)
			continue;
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
		if (deads.count(target_n) != 0)
			continue;
		else
			targ_f = 1;
	}
	if (!targ_f)
		return -1;
	queue<string> unl;
	unl.push("0000");

	unl.push("round");
	int step = 1;
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
				if (deads.count(cur_n) != 0)
					continue;
				if (hslst.count(cur_n) != 0)
					continue;
				unl.push(cur_n);
				hslst.insert(cur_n);
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
				if (deads.count(cur_n) != 0)
					continue;
				if (hslst.count(cur_n) != 0)
					continue;
				unl.push(cur_n);
				hslst.insert(cur_n);
			}
		}
		if (unl.front() == "round")

			unl.push("round");
	}
	return -1;
}

