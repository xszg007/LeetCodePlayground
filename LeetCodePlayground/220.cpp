#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
	int len = nums.size();
	if (!len)
		return false;
	for (int i = 0; i<len; i += (k + 1))
	{
		for (int j = 1; j <= k; j++)
		{
			if (i + j<len)
			{
				int n1 = nums[i];
				int n2 = nums[i + j];
				//static_cast<long long>(n1);
				//static_cast<long long>(n2);
				long long sub = n1 - n2;
				if (sub < 0)
					sub = -sub;
				if (sub <= t)
					return true;
			}
		}
	}
	return false;
}