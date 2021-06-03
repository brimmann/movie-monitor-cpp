#include "movie_class.h"
#include <iostream>

void movie::SetTitle(string input)
{
	title = input;
}

void movie::SetYear(unsigned int input)
{
	year = input;
}

void movie::SetDirector(string input)
{
	director = input;
}

void movie::Display()
{
	cout << "Title: " << title << endl;
	cout << "Year Released: " << year << endl;
	cout << "Director: " << director << endl;
}

string movie::Compare(movie input)
{
	if (input.year == year)
		return "Released in Same Year\n";
	else
		return "Not Released in Same Year\n";
}