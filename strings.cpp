#include <iostream>


using namespace std;


int main(int argc, char* argv[]) {
	string phrase = "This is a phrase";

	// first parameter is the substring to try to find, the second is the starting index for the search
	cout << phrase.find("phrase", 0) << endl;
	
	// first parameter is index that the substring starts at, the second is the length of the substring
	cout << phrase.substr(8, 3) << endl;
	
	return 0;
}
