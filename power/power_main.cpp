#include <iostream>
using namespace std;
int power(int b, int p);

int main()
{
	cout << power(16, 3) << endl;
	return 0;
}

int power(int b, int p)
{
	if (p == 0)
	{
		return 1;
	}
	else
	{
		return b * power(b, p - 1);
	}

}