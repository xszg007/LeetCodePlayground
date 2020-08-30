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

string reverseWords(string s) {
	int len_s = s.size();
	int left = 0;
	int right = 0;
	for (int i = 1; i<len_s; i++)
	{
		if (s[i] != ' ')
			continue;
		else if (s[i] == ' ')
		{
			right = i - 1;
			while (left<right)
			{
				swap(s[left], s[right]);
				left++;
				right--;
			}
			if (i<len_s - 1)
			{
				left = i + 1;
				right = i + 1;
			}
		}

	}
	right = len_s - 1;
	while (left < right)
	{
		swap(s[left], s[right]);
		left++;
		right--;
	}
	return s;
}