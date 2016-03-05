#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	while (num != 42)
	{
		cin >> num; // cin terminates after num == 42, so no infinite loop occurs.
		if (num != 42)
			cout << num << endl;
		else
			break;
	}
	return 0;
}
