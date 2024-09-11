#include <iostream>
using namespace std;
int main()
{
	// EX Begin8
	
	unsigned int a, b, Am; // variables
	
	cout << "Enter a: "; // introduct var 'a'
	cin >> a;
	cout << "Enter b: "; // introduct var 'b'
	cin >> b;
	
	Am = (a+b)/2; // result calculation
	
	cout << "Arithmetic mean: " << Am << endl << endl; // result output
	
	// EX Begin28

	unsigned int V1, V2, S, T;  // variables

	cout << "Enter V1 (km/h): "; // introduct var 'V1' - speed car1 
	cin >> V1;
	cout << "Enter V2 (km/h): "; // introduct var 'V2' - speed car2 
	cin >> V2;
	cout << "Enter T (hours): "; // introduct var 'T' - time
	cin >> T;

	S= V1*T + V2*T; // result calculation total distance

	cout << "Total distance between cars: " << S << endl; // result output

	return 0;
}