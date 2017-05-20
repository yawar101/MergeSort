#include "MergeSort.h"
#include <iostream>
using namespace std;

int main(void)
{
	int array[8] = { 3,2,5,1,10,23,4};

	mergesort(array,0,7); // divide the array untill there are multiple arrays of just one element each at the end
	merge(array, 0, 2, 7); // start merging them in the same order as they were divided

	for(int i=0; i<8; i++)  //print the sorted array
	cout<< array[i]<< endl;
	system("pause");
	return 0;
}