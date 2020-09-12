#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

vector<string> res;
void dfsease(vector<vector<string>> inputs, int n, string tmp) {
	if (n == inputs.size() - 1) {
		for (auto i : inputs[0]) {
			string item = tmp;
			tmp += i;
			res.push_back(tmp);
			tmp = item;
		}
	}
	else {
		for (auto i : inputs[n]) {
			string item = tmp;
			tmp = tmp + i + "-";
			dfsease(inputs, n + 1, tmp);
			tmp = item;
		}
	}
}

//int main() {
//	int n = 3;
//	vector<string> l1 = { "man", "woman" };
//	vector<string> l2 = { "coder","gamer","painter" };
//	vector<string> l3 = { "phd" };
//	vector<vector<string>> inputs = {l1,l2,l3};
//	string tmp;
//	dfs(inputs, 0, tmp);
//	return 0;
//}