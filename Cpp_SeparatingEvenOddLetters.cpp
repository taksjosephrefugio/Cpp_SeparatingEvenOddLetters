/*
This program takes a string from the user and outputs
two strings: one string of all letters from the original
string that has even indices and another string from the
original string that has odd indices

e.g. 
INPUT: ABCDEFGHIJKLM
OUTPUT: ACEGIKM BDFHJL

Code written by: TAK'S JOSEPH REFUGIO
Code written on: Summer 2017
Code written for: Noone. Just practicing.
*/

#include <iostream>
#include <string>
#include <vector>
#define MAX_NUM_OF_STRINGS 10
using namespace std;

class Userstring
{
public:
	vector <char> oddLetters;		// char array that holds the odd letters only
	vector <char> evenLetters;
	void printResults();				// Prints the results	
	void userPrompt();
private:
	string aString;			// string that holds the user input string	
	void populateOddLetters();	
	void populateEvenLetters();		
};
Userstring myString[MAX_NUM_OF_STRINGS];

void Userstring::printResults() {
	populateOddLetters();
	populateEvenLetters();
	
	for (int ctr = 0; ctr < oddLetters.size(); ctr++) { cout << oddLetters[ctr]; }
	cout << " ";
	for (int ctr2 = 0; ctr2 < evenLetters.size(); ctr2++) { cout << evenLetters[ctr2]; }
	cout << "\n";
}
void Userstring::userPrompt() {
	cin >> aString;
}
void Userstring::populateOddLetters() {
	for (int i = 0; i < aString.size(); i++) {
		if (i%2 == 0) { oddLetters.push_back(aString[i]); }
	}
}
void Userstring::populateEvenLetters() {
	for (int j = 0; j < aString.size(); j++) {
		if (j%2 != 0) { evenLetters.push_back(aString[j]); }
	}
}

int getNumOfWords() {
	int res = 0;
	cin >> res;
	return res;
}
void wordOperation(int anum) {
	for (int count = 0; count < anum; count++) { myString[count].userPrompt(); }
	for (int count2 = 0; count2 < anum; count2++) { myString[count2].printResults(); }
}
int main()
{
	int NUM_OF_WORDS = getNumOfWords();
	wordOperation(NUM_OF_WORDS);
	return 0;
}

