//=====================================================================================================
#include <cstdlib>
#include <iostream>

using namespace std;
//=====================================================================================================
// HEAPSORT .A; n/
// 1 BUILD-MAX-HEAP .A; n/
// 2 for i D n downto 2
// 3 exchange AOE1c with AOEi c
// 4 A: heap-size D A: heap-size  1
// 5 MAX-HEAPIFY .A; 1/

// MAX-HEAP-MAXIMUM.A/
// 1 if A: heap-size < 1
// 2 error <heap underüow=
// 3 return AOE1c

// MAX-HEAP-EXTRACT-MAX .A/
// 1 max D MAX-HEAP-MAXIMUM.A/
// 2 AOE1c D AOEA: heap-sizec
// 3 A: heap-size D A: heap-size  1
// 4 MAX-HEAPIFY .A; 1/
// 5 return max

// MAX-HEAP-I NCREASE-KEY .A; x; k/
// 1 if k < x: key
// 2 error <new key is smaller than current key=
// 3 x: key D k
// 4 ûnd the index i in array A where object x occurs
// 5 while i > 1 and AOEPARENT.i /c: key < AOEi c: key
// 6 exchange AOEi c with AOEPARENT.i /c, updating the information that maps
// priority queue objects to array indices
// 7 i D PARENT.i /

// MAX-HEAP-I NSERT .A; x; n/
// 1 if A: heap-size == n
// 2 error <heap overüow=
// 3 A: heap-size D A: heap-size C 1
// 4 k D x: key
// 5 x: key D 1
// 6 AOEA: heap-sizec D x
// 7 map x to index heap-size in the array
// 8 MAX-HEAP-I NCREASE-KEY .A; x; k/

int heapsort(int array[], int n)
{

}

//=====================================================================================================
// QUICKSORT.A; p; r
// 1 if p < r
// 2 // Partition the subarray around the pivot, which ends up in AOEqc.
// 3 q D PARTITION.A; p; r/
// 4 QUICKSORT.A; p; q  1/ // recursively sort the low side
// 5 QUICKSORT.A; q C 1; r/ // recursively sort the high side

// PARTITION.A; p; r/
// 1 x D AOErc // the pivot
// 2 i D p  1 // highest index into the low side
// 3 for j D p to r  1 // process each element other than the pivot
// 4 if AOEj c හ x // does this element belong on the low side?
// 5 i D i C 1 // index of a new slot in the low side
// 6 exchange AOEi c with AOEj c // put this element there
// 7 exchange AOEi C 1c with AOErc // pivot goes just to the right of the low side
// 8 return i C 1 // new index of the pivot

int quicksort(int array[], int n)
{

}