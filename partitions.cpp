#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> arr)
{
	int sum = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		sum += arr[i];
	}
	
	return sum;
}

vector<vector<int> > * partition(vector<int> arr, int n)
{
	int total = sum(arr);
	int partition_sum;
	vector<vector<int> > * partitions = new vector<vector<int> >;
	
	if(total % n != 0)
	{
		printf("List could not be partitioned");
		return partitions;
	}
	
	partition_sum = total / n;
	
	int partial_sum = 0;
	int i_prev = 0;
	int partition_number = 0;
	for (int i = 0; i <= arr.size(); i++)
	{
		partial_sum += arr[i];
		if(partial_sum == partition_sum)
		{
			for(int j = 0; j <= i - i_prev; j++)
			{
				(*partitions)[partition_number][j] = arr[i_prev + j];
			}
			
			partition_number += 1;
			i_prev = i + 1;
			partial_sum = 0;
		}
		
		else if (partial_sum > partition_sum)
		{
			printf("List could not be partitioned");
			return partitions;
		}
		
	}
	
	return partitions;
}


int main (int argc, char* argv[])
{
	vector<int> list;
	list.push_back(3);
	list.push_back(5);
	list.push_back(8);
	list.push_back(0);
	list.push_back(8);
	
	vector<vector<int> > * partitions = partition(list, 3);
	
	for(int i = 0; i < partitions->size(); i++)
	{
		for(int j = 0; j < partitions[i].size(); j++)
		{
			printf("%d\t", (*partitions)[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
