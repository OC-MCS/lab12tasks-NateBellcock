#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isBalanced(string s)
{
	bool balanced = true;
	vector<char> v;
	for (int i = 0; i < s.length() && balanced; i++)
	{
		if (s[i] == '(')
		{
			v.push_back(s[i]);
		}
		if (s[i] == ')')
		{

			if (v.empty())
			{
				balanced = false;
			}
			else
			{
				v.pop_back();
			}
		}
	}
	if (!v.empty())
	{
		balanced = false;
	}
	return balanced;
	
}

int main()
{
	ifstream file;
	file.open("balancedTestCases.txt");
	string s;
	while (getline(file, s))
	{
		if (isBalanced(s))
			cout << s << " is balanced." << endl;
		else
			cout << s << " is not balanced. " << endl;
	}

}