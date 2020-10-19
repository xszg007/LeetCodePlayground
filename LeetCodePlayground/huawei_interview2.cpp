#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

//int main()
//{
//	vector<int> daytemperatures = { 72, 73, 75, 71, 68, 72, 76, 70 };
//	int len = daytemperatures.size();
//	stack<int> s_tp;
//	vector<int> res(len);
//	for (int i = 0; i < len; i++) {
//		while (!s_tp.empty() && daytemperatures[s_tp.top()] < daytemperatures[i]) {
//			int idx = s_tp.top();
//			res[idx] = i - idx;
//			s_tp.pop();
//		}
//		s_tp.push(i);
//	}
//
//	while (!s_tp.empty()) {
//		res[s_tp.top()] = 0;
//		s_tp.pop();
//	}
//	for (int i = 0; i < res.size(); i++) {
//		cout << res[i] << ' ';
//	}
//	return 0;
//}