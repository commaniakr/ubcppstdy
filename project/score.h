#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <boost/algorithm/string.hpp>

using namespace std;

struct student {
  string name;
  int id;
  int score;
};

void import(vector<student> *lst);
void print();
void find();
