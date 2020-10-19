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

bool backspaceCompare(string &S, string &T) {
	int lens = S.size();
	int lent = T.size();
	for (int i = 0; i<lens; i++) {
		if (S[i] == '#') {
			S.erase(S.begin() + i, S.begin() + i + 1);
			i -= 2;
			lens -= 2;
		}
	}
	for (int i = 0; i<lent; i++) {
		if (T[i] == '#') {
			T.erase(T.begin() + i, T.begin() + i + 1);
			i -= 2;
			lent -= 2;
		}
	}
	return(S == T);
}

int main() {
	string S = "ab#c";
	string T = "ad#c";
	bool res = backspaceCompare(S, T);
	cout << S << '\n' << T << endl;
	return res;
}