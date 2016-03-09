#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
int main()
{
	int testcase = 0;
	int pal = 0;
	cin >> testcase;
	while (testcase > 0)
	{
		cin >> pal;
		int digits = 0;
		int palhold = pal;
		while (palhold != 0)
		{
			palhold /= 10;
			digits++;
		}
		int size = digits;
		if (size > 1)
		{
			int half = 0;
			int hold1 = 0, hold2 = 0;
			string h1, h2, solution;
			half = size;
			while (half >= size/2)
			{
				h1 += to_string(((int)(pal/(pow(10.0,half)))) % 10);
				half--;
			}
			while (half >= 0)
			{
				h2 += to_string(((int)(pal/(pow(10.0,half)))) % 10);
				half--;
			}
			hold1 = stoi (h1,0,10);
			hold2 = stoi (h2,0,10);
			string temp1 = h1;
			string temp2 = h2;
			int x = 0;
			if (size % 2 == 0)
			{
				reverse(temp2.begin(),temp2.end());
				temp1.erase(0,1);
				if (temp1 == temp2)
				{
					h1 = to_string(hold1);
					h2 = to_string(hold2);
					x++;
				}
			}
			else if (size % 2 != 0)
			{
				reverse(temp2.begin(),temp2.end());
				temp2.pop_back();
				temp1.erase(0,1);
				if (temp1 == temp2)
				{
					h1 = to_string(hold1);
					h2 = to_string(hold2);
					x++;
				}	
			}
			if (h1.back() > h2.front() && x == 0)
			{
				h1.erase(0,1);
				reverse(h1.begin(),h1.end());
				h2 = h1;
				reverse(h1.begin(),h1.end());
				if (size % 2 != 0)
				{
					h2.erase(0,1);
				}
			}
			else if (h1.back() < h2.front() && x == 0)
			{
				hold1++;
				h1 = to_string(hold1);
				reverse(h1.begin(),h1.end());
				h2 = h1;
				reverse(h1.begin(),h1.end());
				if (size % 2 != 0)
				{
					h2.erase(0,1);
				}
			}
			else if (h1.back() == h2.front() && x == 0)
			{
				h1.erase(0,1);
				reverse(h2.begin(),h2.end());
				if (h1 > h2 && x == 0)
				{
					h1.erase(0,1);
					reverse(h1.begin(),h1.end());
					h2 = h1;
					reverse(h1.begin(),h1.end());
					if (size % 2 != 0)
					{
						h2.erase(0,1);
					}
				}
				else if (h1 < h2 && x == 0)
				{
					hold1++;
					h1 = to_string(hold1);
					reverse(h1.begin(),h1.end());
					h2 = h1;
					reverse(h1.begin(),h1.end());
					if (size % 2 != 0)
					{
						h2.erase(0,1);
					}
				}
			}
			solution = h1+h2;
			cout << solution << endl;
		}
		else
		{
			cout << pal << endl;
		}
		testcase--;
	}
	return 0;
}











