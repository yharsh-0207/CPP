#include <iostream>
#include <conio.h>
using namespace std;
class Redmi {
public:
	double cost;   
	int slots; 
};
int main() {
    Redmi N9;       

	N9.cost = 12000.0;
	N9.slots = 2;

	cout << "Cost of Redmi note 9 : " << N9.cost << endl;

	cout << "Number of card slots for Redmi note 9 : " << N9.slots << endl;


	return 0;
}