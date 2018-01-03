#include <iostream>
#include <cstring>
using namespace std;

struct product {
	char name[20];
	int price;
	char os[20];
};

int main() {
	char product_name[20];
	char country[4];
	strcpy(product_name, "good-laptop");
	product ko = {product_name, 700000, "pre-install"};
	product en = {product_name, 700000, "none"};
	strcat(ko.name, "-ko");
	strcat(en.name, "-en");
	cout << "enter your country : ";
	cin >> country;
	if (strcmp(country, "en") == 0) {
		cout << "name : " << en.name << endl;
		cout << "price : " << en.price << endl;
		cout << "os : " << en.os << endl;
	}
	else if (strcmp(country, "ko") == 0) {
		cout << "name : " << ko.name << endl;
		
	return 0;
}
