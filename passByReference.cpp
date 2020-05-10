#include <iostream>
#include <vector>


using namespace std;

/* by putting an '&' before vec, this allows the object to be passed by
reference to the function and thus to be changed in place*/ 
void vectorAppend(vector<int> &vec, int value)
{
	vec.push_back(value);
}


int main (int argc, char* argv[])
{
	vector<int> arr(4);
	arr[0] = 4;
	arr[1] = 32;
	arr[2] = 9;
	arr[3] = 566;
	cout << arr.size() << endl;
	
	vectorAppend(arr, 10);
	cout << arr.size() << endl;
	
	vectorAppend(arr, 11);
	cout << arr.size() << endl;
	
	vectorAppend(arr, 12);
	cout << arr.size() << endl;
	
	return 0;
}
