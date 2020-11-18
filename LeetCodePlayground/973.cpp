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

vector<vector<int>> rec;

void sortvec(vector<int> input) {
	rec.push_back(input);
	int len = rec.size();
	if (len == 1) {
		return;
	}
	int cur_val = input[2];
	for (int i = len - 2; i >= 0; i--) {
		if (rec[i][2]>cur_val) {
			swap(rec[i], rec[i + 1]);
		}
		else break;
	}
}

vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
	for (int i = 0; i<points.size(); i++) {
		int x = points[i][0];
		int y = points[i][1];
		vector<int> cur_pt = { x,y,x*x + y*y };
		sortvec(cur_pt);
	}
	vector<vector<int>> res;
	for (int i = 0; i<K; i++) {
		vector<int> cur = { rec[i][0],rec[i][1] };
		res.push_back(cur);
	}
	return res;
}



//int main() {
//	vector<vector<int>> pts = { {1,3},{-2,2} };
//	vector<vector<int>> op;
//	op=kClosest(pts,2);
//	return 0;
//}