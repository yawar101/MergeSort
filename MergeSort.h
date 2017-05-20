#pragma once


class MergeSort{
	 
	 friend void mergesort(int a[], int l, int r);
     friend void merge(int a[], int l, int m, int r);
     MergeSort();
	~MergeSort(void);
/*	
void mergesort(int a[], int l, int r);
void merge(int a[], int l, int m, int r);
*/

};

void mergesort(int a[], int l, int r);
void merge(int a[], int l, int m, int r);