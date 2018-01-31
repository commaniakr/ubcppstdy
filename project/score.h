#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct student {
	char* name = new char[6];
	int id;
	int score;
	student *next;
};

class scorelist {
public:
	student *head, *tail;

	scorelist() {
		head = NULL;
		tail = NULL;
	}
	bool create();
	void import();
	student* find();
	void print(student *found);
	int erase(student *found);
};