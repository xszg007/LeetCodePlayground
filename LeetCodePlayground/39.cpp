#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int m_target;
vector<int> m_candidates;
vector<vector<int>> res;

void dfs(int i, int cur_sum, vector<int> cur_res);

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	m_target = target;
	sort(candidates.begin(), candidates.end());
	m_candidates = candidates;
	vector<int> temp;
	dfs(0, 0, temp);
	return res;
}

void dfs(int i, int cur_sum, vector<int> cur_res)
{
	
	if (cur_sum == m_target)
	{
		res.push_back(cur_res);
		return;
	}
	if (cur_sum>m_target)
		return;
	if (i == m_candidates.size())
		return;
	dfs(i + 1, cur_sum, cur_res);
	cur_sum += m_candidates[i];
	cur_res.push_back(m_candidates[i]);
	dfs(i, cur_sum, cur_res);
}