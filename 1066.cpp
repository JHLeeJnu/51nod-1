#include <iostream>
using namespace std;
int n,k,t;
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		if (n%(k+1)!=0)
			cout << "A\n";
		else
			cout << "B\n";
	}
	return 0;
}
