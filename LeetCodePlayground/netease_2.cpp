#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

int funcease()
{
	int res = 0;
	int m, n;
	cin >> m >> n;
	vector<int> node_s;
	vector<string> node_lr;
	vector<int> node_d;
	int a;
	string lr;
	int b;
	int i=0;
	while (i<n)
	{
		i++;
		cin >> a >> lr >> b;
		node_s.push_back(a);
		node_lr.push_back(lr);
		node_d.push_back(b);
	}
	vector<int> s;
	for (int i = 0; i < n; i++)
	{
		s[node_s[i]] = 1;
	}



	return 0;
}