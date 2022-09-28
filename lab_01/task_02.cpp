#include<iostream>
#include<string>

using namespace std;

struct Book {
	int BookID;
  	string name;
	float price;
};

struct Order {
  int OrderID;
  Book books[5];
};

int main() {
  Order orderOBJ;
    cout << "book ID? ";
    cin >> orderOBJ.books[1].BookID;
    cout << "Book name? ";
    cin >> orderOBJ.books[1].name;
    cout << "Book price? ";
    cin >> orderOBJ.books[1].price;
    cout << endl << endl;


    cout << "book ID : " << orderOBJ.books[1].BookID << endl;

    cout << "book name : " << orderOBJ.books[1].name << endl;

    cout << "book price : " << orderOBJ.books[1].price << endl;

    cout << endl << endl;


  return 0;

}
