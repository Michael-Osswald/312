//*********************************************************************

// Helper function findPivot
// Given three indexes in the array, determines which is best for pivot
// Sets pivotIndex in calling statement to the appropriate index
// Calculating the number of comparisons is tricky, so it's been done
// for you :-).  It's 2 or 3 total each time findPivot is called

void findPivot(int array[], int l, int m, int r, int& pivotIndex) {
    // NOTE that if we simply used a strategy of choosing one index,
    // this function can simply set pivotIndex to one of l, m, or r

    // pivotIndex = l;

    // However, since we're employing a "best of 3" strategy,
    // we'll instead make a few comparisons to find the "best" pivot

    comps++;
    if (array[l] > array[m]) {
        comps++;
        if (array[m] > array[r]) {
            pivotIndex = m;
        }
        else if (array[l] > array[r]) {
            comps++;
            pivotIndex = r;
        }
        else {
            comps++;
            pivotIndex = l;
        }
    }
    else {
        comps++;
        if (array[l] > array[r]) {
            pivotIndex = l;
        }
        else if (array[m] > array[r]) {
            comps++;
            pivotIndex = r;
        }
        else {
            comps++;
            pivotIndex = m;
        }
    }
}

// Helper function quickSortPartition
// Chooses a pivot value, performs partition, returns index where
// pivot value is when done

int quickSortPartition(int array[], int start, int end) {

    // Pre-condition: there are at least three elements to partition

    // We'll use a "best of 3" strategy to select a pivot value
    // using a helper function to determine which value is best
    int mid = (start + end) / 2;
    int pivotIndex;

    // Select pivot - findPivot will be set to the best index
    // and the comps will be conted in tne findPivot function
    findPivot(array, start, mid, end, pivotIndex);

    // Swap pivot value to be the first item temporarily
    // (it'll be moved back after other values are partitioned)
    swap(array[pivotIndex], array[start]);

    // Now that the pivot value is at array[start], let's partition!
    int i = start;
    for (int j=start+1; j<=end; j++) {
        if (array[j] < array[start]) {
            i++;
            // swap smaller value to left part
            swap(array[i], array[j]);
        }
    }

    // Now swap pivot value back into correct position
    swap(array[start], array[i]);
    return i;
}

//*********************************************************************

// Helper function quickSortRecursive
// Handle base cases, use partition function, make recursive calls
// For each call, start and end define which part of the array to sort

void quickSortRecursive(int array[], int start, int end) {

    // Base cases - array of size 0 or 1
    if (end - start < 1) {
        calls++;
        return;
    }

    // Base case - array of size 2 - swap items if needed
    if (end - start == 1) {
        if (array[end] < array[start]) {
            swap(array[start], array[end]);
        }
        calls++;
        return;
    }

    // Call partition to perform partitioning and return index
    // NOTE: *Not* a recursive call, so don't count it as one!

    int partitionIndex = quickSortPartition(array, start, end);

    // At this point, we have, in order, from left to right:
    //    * All values <= pivot value
    //    * The pivot value itself (at partitionIndex)
    //    * All values >= pivot value

    // Now we recursively apply this sort to those 2 partitioned parts
    // (Not including pivot value, as it doesn't need to be moved now!)

    quickSortRecursive(array, start, partitionIndex-1);
    quickSortRecursive(array, partitionIndex+1, end);

    // After these calls recurse all the way to the base cases, we're sorted!
}

//---------------------------------------------------------------
// quickSort(int [], int)
// Expects an integer array and its size
// Returns nothing
// Side Effect is array elements are arranged in sorted order
// Side Effect is output to screen number of comparisons and swaps
//---------------------------------------------------------------

void quickSort(int array[], int size) {
    comps = moves = calls = 0;

    quickSortRecursive(array, 0, size-1);

    sortReport(array, size, "QUICK");

}
