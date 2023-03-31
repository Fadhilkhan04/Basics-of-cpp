#include <iostream>
using namespace std;

class Calculator {
	
	public:
		
		void printresult(double x,double y) {
		
		cout << "fnum +snum =" << x + y<< endl;
		cout <<"fnum - snum =" << x - y << endl;
		cout << "fnum*snum =" <<x * y << endl;
		cout << "fnum /snum =" << x / y << endl;
		
	}
};

int main() {
	
	double fnum, snum;
	Calculator C;
	
	cout << "Enter number one : ";
	cin >> fnum;
	
	cout << "Enter number two : ";
	cin >> snum;
	
	C.printresult(fnum,snum);
	
	return 0;
}
