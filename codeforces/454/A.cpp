#include<bits/stdc++.h>
using namespace std;
int main()
{int n,num=0;
cin>>n;
for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
  num = abs(i - (n + 1) / 2) + abs(j - (n + 1) / 2);
			if (num > n / 2)
				cout << "*";
			else
				cout << "D";
		}
		cout << endl;
	}
return 0;
}
