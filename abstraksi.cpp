#include <iostream>
using namespace std;

class AbtraksiKlas {
private: string x, y;
	   
public:

	//method untuk mengisi nilai
	//private member
	void setXY(string a, string b) {
		x = a;
		y = b;
	}
	//menampilkan nilai
	void display() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
};

int main() {
	AbtraksiKlas ak;
	ak.setXY("Yogyakarta", "Kampus");
	ak.display();

    return 0;
}