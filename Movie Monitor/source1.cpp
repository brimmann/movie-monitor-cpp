#include <iostream>
#include "movie_class.h"

int main()
{
	using namespace std;
	movie obj1;
	obj1.SetTitle("The Message");
	obj1.SetYear(1977);
	obj1.SetDirector("Moustapha Akkad");
	movie obj2;
	obj2.SetTitle("Prince of Persia");
	obj2.SetYear(2010);
	obj2.SetDirector("Skiw Watson");
	obj1.Display();
	obj2.Display();
	cout << obj1.Compare(obj2);
	return 0;
}