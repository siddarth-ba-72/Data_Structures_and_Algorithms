#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// ? C-STYLE STRINGS

	// char str[6] = "gfg";
	// cout << str << endl;
	// for (int i = 0; i < sizeof(str); i++)
	// {
	// 	cout << str[i] << endl;
	// }
	// cout << strlen(str) << endl;

	// char s1[] = "abc";
	// char s2[] = "def";

	// cout << strcmp(s1, s2) << endl;
	// char s3[5];
	// strcpy(s3, "gfg");
	// cout << s3 << endl;

	// char strs[] = {'g', 'f', 'g', '\0'};
	// cout << strs << endl;

	// ? C++-STYLE STRINGS

	// string str = "siddarth";
	// str = str + "gfg";
	// cout << str << endl;
	// cout << str.substr(1, 5) << endl;
	// cout << str.find("xyz") << endl;

	// string s1 = "abc";
	// string s2 = "def";
	// if (s1 == s2)
	// 	cout << "equal" << endl;
	// else if (s1 > s2)
	// 	cout << "greater" << endl;
	// else
	// 	cout << "less" << endl;

	string name;
	cout << "Enter your name: ";
	getline(cin, name);
	// getline(cin, name, 'q); // stops at q
	cout << "Hello " << name << endl;
	for (char x : name)
		cout << x << endl;

	return 0;
}
