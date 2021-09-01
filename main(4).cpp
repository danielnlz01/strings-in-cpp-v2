#include <iostream>
#include <string>

using namespace std;

string s1, s2;

int main()
{
	
	cout << "cin vs getline" << endl;
	
	cout << "person numer 1: ";
	getline(cin, s1); //every char of input
	
	cout << "person numer 2: ";
	cin >> s2; //troubles w/ spaces, special chars, enters, etc.
	
	cout << "p1: " << s1 << "\np2: " << s2 << endl;
	
	return 0;
}