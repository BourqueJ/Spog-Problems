#include <iostream>
using namespace std;
int main()
{
	int expressionNum = 0;
	char rpn[400] = {0};
	cin >> expressionNum;
	while (expressionNum > 0)
	{
		for (int x = 0; x < 400; x++)
		{
			if (rpn[x] == ' ' || rpn[x] == '\n')
			{
				break;
			}
			cin >> rpn[x];
		}
		cout << *rpn;
		expressionNum--;
	}
}