#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
using namespace std;

string decodeString(string s)
{
	int num = 0;
	int cnt = 0;//count the repeat num
	bool getcr = 0;
	bool qt = 0;
	int kl = 0;
	string nums;
	string cur_s;
	queue<string> cur_q;
	for (int i = 0; i<s.size(); i++)
	{
		if ((int)s[i]>47 && (int)s[i]<58 )     
		{
			if (kl == 0)
			{
				
				nums = nums + s[i];
				stringstream ss;
				ss << nums;
				ss >> num;
				/*int cur = s[i] - 48;
				num += cur * pow(10, cnt);
				cnt++;*/
			}
			else
			{
				cur_s = cur_s + s[i];
			}
			
		}
		else if (s[i] == '[' && kl == 0)
		{
			kl = 1;//get the first [
				   //取到下一个合法]的string
			getcr = 1;
			continue;

		}
		else if (getcr == 1)
		{
			//get char
			if (s[i] == '[')
			{
				kl++;
			}
			if (s[i] == ']' && kl == 1)
			{
				getcr = 0;
				kl--;
				//curent sting push into queue
				while (num)
				{
					num--;
					cur_q.push(cur_s);
				}
				cnt = 0;
				nums = "";
				cur_s = "";
				continue;
			}
			if (s[i] == ']' && kl != 1)
			{
				cur_s = cur_s + s[i];
				kl--;
				qt = 1;
				continue;
			}
			cur_s = cur_s + s[i];
		}
		else
		{
			string cur_sg;
			cur_sg = cur_sg + s[i];
			cur_q.push(cur_sg);
		}
	}
	string cur_res;
	while (!cur_q.empty())
	{
		cur_res = cur_res + cur_q.front();
		cur_q.pop();
	}
	if (qt)
	{
		return decodeString(cur_res);
	}
	else
	{
		return cur_res;
	}
}