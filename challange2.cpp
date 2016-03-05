#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
	int testNum = 0, hold = 0;
	int xint = 0, yint = 0;
	bool prime = true;
	cin >> testNum;
	while (testNum > 0)
	{
		cin >> xint >> yint;
		while (xint <= yint)
		{
			while (true)
			{
				if (xint <= 1)
				{
					break;
				}
				else if (xint <= 3)
				{
					cout << xint << endl;
					break;
				}
				if (xint % 2 == 0 || xint % 3 == 0)
				{
					break;
				}
				else
				{
					hold = sqrt(xint) + 1;
					if (hold % 2 == 0)
					{
						hold++;
					}
					while (hold > 2)
					{
						if (xint % hold == 0)
						{
							hold = 0;
						}
						hold = hold-2;
					}
					if (hold > 0)
					{
						cout << xint << endl;
					}
					break;
				}
			}
			xint++;
		}
		testNum--;
		cout << endl;
	}
	return 0;
}
//100 000 000 0
// 99 900 000 0