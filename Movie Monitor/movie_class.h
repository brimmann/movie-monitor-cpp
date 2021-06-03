#include <string>
using namespace std;
class movie
{
private:
	string title;
	unsigned int year;
	string director;
public:
	void SetTitle(string);
	void SetYear(unsigned int);
	void SetDirector(string);
	void Display();
	string Compare(movie);
};

