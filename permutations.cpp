#include <iostream>
#include <vector>

using namespace std;

vector<string> generatePermutation(vector<string> permutee, vector<int> permuter)
{
	vector<string> permutation;
	
	assert(permutee.size() == permuter.size());
	
	for (int i = 0; i < permuter.size(); i++)
	{
		int index = permuter[i];
		permutation.push_back(permutee[index]);
	}
	
	return permutation;
}


vector<string> generatePermutation_v2(vector<string> permutee, vector<int> permuter)
{
	assert(permutee.size() == permuter.size());
	vector<string> permutation(permutee.size());
	
	for (int i = 0; i < permuter.size(); i++)
	{
		int index = permuter[i];
		permutation[i] = permutee[index];
	}
	
	return permutation;
}





int main(int argc, char* argv[])
{
	vector<string> permutee;
	
	permutee.push_back("Hello");
	permutee.push_back("there");
	permutee.push_back("person");
	permutee.push_back("lalala");
	permutee.push_back("more");
	permutee.push_back("stuff");
	
	vector<int> permuter(permutee.size());
	permuter[0] = 2;
	permuter[1] = 0;
	permuter[2] = 5;
	permuter[3] = 1;
	permuter[4] = 3;
	permuter[5] = 4;
	
	vector<string> permutation1 = generatePermutation(permutee, permuter);
	vector<string> permutation2 = generatePermutation_v2(permutee, permuter);
	
	for (int i = 0; i < permutation1.size(); i++)
	{
		cout << permutation1[i] << "\t";
	}
	cout << endl;
	
	for (int i = 0; i < permutation2.size(); i++)
	{
		cout << permutation2[i] << "\t";
	}
	cout << endl;
	
	return 0;
}
