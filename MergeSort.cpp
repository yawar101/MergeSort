#include "MergeSort.h"
//#include <iostream>
#include <stdlib.h>
//using namespace std;


void mergesort(int a[], int l, int r)
{
	

	if(l >=  r)  // if the array is empty or contains just one element
		return;

	int m = (l+r)/2;  // midpoint 

	mergesort(a,l,m); // the left array
	mergesort(a,m+1,r); // right array
	merge(a,l,m,r);  // take the array "a" , the left half starting at "l" ending at "m" ,the right half starting at "m+1" and ending at "r"
}

void merge(int a[], int l, int m, int r)
{
	int i,j,k;
	int *b = (int *)malloc( (r-l+1) * sizeof(int) );
	i=l;
	j=m+1;
	k=0;
	while(i <= m && j <= r){
		if (a[i] <= a[j]) b[k++] = a[i++]; /* write the element standing at index i in the left array at index k in the new array created and iterate i and k at the
		afterwards*/
		else b[k++] = a[j++];
	}
	if(i>m) while(j<=r) b[k++] = a[j++];//if the left array has got empty,then copy the elements from the right array as long as it is empty too
	else while(i<=m) b[k++] = a[i++]; // if the right array has got empty ,copy elements from the left array untill it is also empty
	for(k=0, i=l; i<=r; i++) a[i] = b[k++]; // copy elements one by one from temporary array b[] to our original array a[] and free b[] at the end
	free(b);

}