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

bool isUgly(int num) {
	for (int i = 1; i <= num; i++) {
		if (num%i == 0) {
			int s = num / i;
			if (s!=1 && s != 2 && s != 3 && s != 5) {
				return false;
			}
		}
	}
	return true;
}

int nthUglyNumber(int n) {
	int count = 1;
	int cur_num = 1;
	while (count<n) {
		if (isUgly(cur_num)) {
			cur_num++;
			count++;
		}
		else {
			cur_num++;
		}
	}
	return cur_num;
}

//int main() {
//	int num = 10;
//	int res = nthUglyNumber(num);
//	return res;
//}