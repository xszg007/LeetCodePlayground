#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

bool isd(string frt, string scd) {
	int len1 = frt.size();
	int len2 = scd.size();
	if (len1<len2) {
		return 0;
	}
	else {
		for (int i = 0; i<len2; i++) {
			if (frt[len1 - i - 1] != scd[len2 - i - 1])
				return 0;
		}
	}
	return 1;
}

int minimumLengthEncoding(vector<string>& words) {
	string res;
	int len = words.size();
	res = res + words[0] + '#';
	string cur_s = words[0];
	for (int i = 1; i<len; i++) {

		if (isd(cur_s, words[i])) {
			continue;
		}
		else {
			cur_s = words[i];
			res = res + words[i] + '#';
		}
	}
	return res.size();
}

//int main() {
//	vector<string> input = { "time", "me", "bell" };
//	int length = minimumLengthEncoding(input);
//	return 0;
//}