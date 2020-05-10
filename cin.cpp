#include <iostream>
#include <ios>		// for numeric_limits<streamsize>::max()


using namespace std;


int main(int argc, char* argv[]) {
	int age;
	cout << "Enter your age: ";
	cin >> age;
	
	//
	cin.ignore(1000, '\n');
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	string name;
	cout << "Enter your name: ";

	// first parameter is the input stream, and the second is the variable to receive the input
	getline(cin, name);
	cout << endl;
	
	cout << "Your name is " << name << "." << endl;
	cout << "You are " << age << " years old." << endl;
	cout << endl;
	
	return 0;
}
