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

map<string, priority_queue<string, vector<string>, std::greater<string>>> vec;

vector<string> stk;

void dfs(const string& curr) {
	while (vec.count(curr) && vec[curr].size()>0) {
		string tmp = vec[curr].top();
		vec[curr].pop();
		dfs(tmp);
	}
	stk.emplace_back(curr);
}

vector<string> findItinerary(vector<vector<string>>& tickets) {
	for (auto& it : tickets) {
		vec[it[0]].emplace(it[1]);
	}
	dfs("JFK");
	reverse(stk.begin(), stk.end());
	return stk;
}
