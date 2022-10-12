#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream inputFile;
	char ch;
	inputFile.open("datafile.txt", ios::in); // text file open in read mode

	if (inputFile.is_open())
	{
		while (!inputFile.eof() && inputFile.get(ch)) // loop until not the end of file and there's no character left in the text file
		{
			if (ch == '+')
			{
				cout << "Plus: +" << endl;
			}
			else if (ch == '-')
			{
				cout << "Dash (minus): -" << endl;
			}
			else if (ch == '*')
			{
				cout << "Asterisk: *" << endl;
			}
			else if (ch == '/')
			{
				cout << "Forward_slash: /" << endl;
			}
			else if (ch == '=')
			{
				cout << "Assignment_operator: =" << endl;
			}
			else if (ch == ':')
			{
				cout << "Colon => :" << endl;
			}
			else if (ch == ';')
			{
				cout << "Semi_colon: ;" << endl;
			}
			else if (ch == ',')
			{
				cout << "Comma: ," << endl;
			}
			else if (ch == '.')
			{
				cout << "Full_stop: ." << endl;
			}
			else if (ch == ')')
			{
				cout << "Left_pranthses: )" << endl;
			}
			else if (ch == '(')
			{
				cout << "Right_pranthses: (" << endl;
			}
			else if (ch == ']')
			{
				cout << "Right_square_bracket: ]" << endl;
			}
			else if (ch == '[')
			{
				cout << "Left_square_bracket: [" << endl;
			}
			else
			{
				continue;
			}
		}
	}
	else
	{
		cout << "File is missing." << endl;
	}

	inputFile.close(); // close the text file
	return 0;
}