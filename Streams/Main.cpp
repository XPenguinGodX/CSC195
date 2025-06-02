#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Write(string text, ostream& output)
{
	//output << text;

}

int main()
{
	string text = "Hello World\n";
	cout << text;

	

	//cin >> text; -- Listen for a single word in the sentence

	time_t start = time(NULL);

	for (int i = 0; i < 10'000'000; i++) 
	{
		Write(text, cout);
	}
	time_t end = time(NULL);


	getline(cin, text);
	cout << text;

	//output to file
	ofstream output("penguin.txt");
	output << text;
	output.close();

	text = "";
	ifstream input("penguin.txt");
	input >> text;
	input.close();

	cout << "Read from file: " << text << endl;
 }