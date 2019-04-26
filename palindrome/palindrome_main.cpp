#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string strip(string s);
bool isPalindrome(string s);

int main()
{
	ifstream file;
	file.open("testCases.txt");
	string s;
	while (getline(file, s))
	{
		if (isPalindrome(strip(s)))
		{
			cout << '\"'<< s << "\" Is a Palindrome\n";
		}
		else
		{
			cout << '\"' << s << "\" Is not a Palindrome\n";;
		}
	}
	cout << endl;
	return 0;
}

bool isPalindrome(string s)
{
	if (s.length() >= 1)
	{
		if (s[0] == s[s.length() -1])
		{
			return isPalindrome(s.substr(1, s.length() - 2));
		}
		else
		{
			return false;
		}
	}
	else
	{
		return true;
	}
}

string strip(string s)
{
	string tep;
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			tep += tolower(s[i]);
		}
	}
	return tep;
}