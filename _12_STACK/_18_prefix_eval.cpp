#include <bits/stdc++.h>
using namespace std;

int precedence_val(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

bool isOperator(char c)
{
	return (!isalpha(c) && !isdigit(c));
}

string infix_to_prefix(string inf)
{
	stack<char> stk;
	string prefix;
	int l = inf.length();
	for (int i = l - 1; i >= 0; i--)
	{
		char sym = inf[i];
		if (sym >= 'a' && sym <= 'z' || sym >= 'A' && sym <= 'Z' || isdigit(sym))
			stk.push(sym);
		else if (sym == ')')
			stk.push(sym);
		else if (sym == '(')
		{
			while (stk.top() != ')')
			{
				prefix += stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else if (isOperator(sym))
		{
			if (stk.empty())
				stk.push(sym);
			else
			{
				if (sym == '^')
				{
					while (precedence_val(stk.top()) >= precedence_val(sym))
					{
						prefix += stk.top();
						stk.pop();
					}
				}
				else
				{
					while (precedence_val(stk.top()) > precedence_val(sym))
					{
						prefix += stk.top();
						stk.pop();
					}
				}
				stk.push(sym);
			}
		}
	}
	while (!stk.empty())
	{
		prefix += stk.top();
		stk.pop();
	}
	reverse(prefix.begin(), prefix.end());
	return prefix;
}

int performOperation(int a, int b, char symbol)
{
	if (symbol == '+')
		return a + b;
	else if (symbol == '-')
		return a - b;
	else if (symbol == '*')
		return a * b;
	else if (symbol == '/')
		return a / b;
	else if (symbol == '^')
		return pow(a, b);
	else
		return -1;
}

int postFix_evaluation(string expression)
{
	stack<int> stk;
	string pre_fix = infix_to_prefix(expression);
	for (int i = 0; i < pre_fix.length(); i++)
	{
		char symbol = expression[i];
		if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') || isdigit(symbol))
		{
			int num = symbol - '0';
			stk.push(num);
		}
		else
		{
			int a = stk.top();
			stk.pop();
			int b = stk.top();
			stk.pop();
			int result = performOperation(a, b, symbol);
			stk.push(result);
		}
	}
	return stk.top();
}

int main()
{
	string expression;
	cin >> expression;
	cout << infix_to_prefix(expression) << endl;
	cout << postFix_evaluation(expression) << endl;

	return 0;
}
