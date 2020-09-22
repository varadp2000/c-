#include <bits/stdc++.h>
using namespace std;

vector<int> returnAlternate(vector<int> ip) {
	vector<int> ans;
	int j,bs;
	if(ip.size() % 2 == 1)
		bs = ip.size()/2 +1;
	else
		bs = ip.size() / 2;
	for (int i = 0, j = ip.size() - 1;i<bs; i++, j--)
	{
		ans.push_back(ip[j]);
		if(ip[i] == ip[j])
			break;
		ans.push_back(ip[i]);
	}
	return ans;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> que;
		while (n--)
		{
			int temp;
			cin >> temp;
			que.push_back(temp);
		}
		vector<int> ans = returnAlternate(que);
		for (int i = 0; i < ans.size();i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}
