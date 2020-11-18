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

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
	int len = gas.size();
	int cur_val = 0;
	for (int i = 0; i<len; i++) {
		int count = 0;
		int n = 0;
		for (int j = i; count<len; j++) {
			count++;
			cur_val += (gas[j] - cost[j]);
			if (cur_val<0) {
				n = 1;
				break;
			}
			if (i != 0 && j == len - 1) {
				j = -1;
			}
		}
		if (n == 1) {
			cur_val = 0;
			continue;
		}
		return i;
	}
	return -1;

}

int main() {
	vector<int> gas = { 1,2,3,4,5 };
	vector<int> cost = { 3,4,5,1,2 };
	int res = canCompleteCircuit(gas, cost);
	return res;
}