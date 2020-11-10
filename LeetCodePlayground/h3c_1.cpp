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

string MyCompress(string pcStr) {
	string res;
	int len = pcStr.size();
	if (len == 0) {
		return res;
	}
	int count = 1;
	pcStr = pcStr + "0";
	for (int i = 0; i<len; i++) {
		if (pcStr[i + 1] == pcStr[i]) {
			count++;
		}
		else {
			if (count == 1) {
				res = res + pcStr[i];
			}
			else if (count>1) {
				res = res + pcStr[i] + to_string(count);
				count = 1;
			}
		}
	}
	int len_s = res.size();
	pcStr.erase(pcStr.end() - 1);
	return res;
}

long long MidFactor(long long llVal) {
	vector<long long> res;
	long long len = sqrt(llVal);//
	for (long long i = 0; i<len; i++) {
		if (llVal%i == 0) {
			res.push_back(i);
		}
	}
	//sort(res.begin(),res.end());
	int l = res.size();
	return res[l / 2];
}

//int main() {
//	string input = "ab";
//	string res=MyCompress(input);
//	cout << res << endl;
//	return 0;
//}