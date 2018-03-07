#include <iostream>
#include <string>
#include <vector>

using namespace std;

string string_swap(string input)
{
	string new_string = input;

	for (int i = input.length()-1; i >= 0; i--)
	{
		new_string[(input.length()-1) - i] = input[i];
	}

	return new_string;
}

int main()
{
	string code;
	vector<string> code_array;

	while (code != "END")
	{
		getline(cin, code, '\n');
		code_array.push_back(code);
	}
	
	string result = "";

	for (int i = 0; i < code_array.size() - 1; i++)
	{
		result = string_swap(code_array[i]);
		cout << result << endl;
	}
	
	return 0;
}