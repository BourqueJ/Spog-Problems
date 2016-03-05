#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
	int testNum = 0, hold = 0, xint = 0, yint = 0;
	cin >> testNum;
	while (testNum > 0)
	{
		cin >> xint >> yint;
		while (xint <= yint)
		{
			while (true)
			{
				if (xint <= 1) // since 1, 0 and any negative numbers are not prime
				{
					break;
				}
				else if (xint <= 3) // since 2 and 3 are prime
				{
					cout << xint << endl;
					break;
				}
				else if (xint % 2 == 0 || xint % 3 == 0) //note: if 2 and 3 are not set to primes before this
				{										 //it will filter out 2 and 3 saying they are not prime
					break;
				}
				else //This else statement is checking for primes using the trial division primality test
				{
					hold = sqrt(xint) + 1;
					if (hold % 2 == 0) //Since primes cannot be even, this makes hold odd
					{
						hold++;
					}
					while (hold > 2)
					{
						if (xint % hold == 0)
						{
							hold = 0;
						}
						hold = hold-2; //Since hold cannot be even and be prime, we simply skip all even numbers
					}
					if (hold > 0) //If the while function ends without xint % hold == 0, than we know it is prime
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