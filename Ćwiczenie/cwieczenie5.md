Rafał Miłosz
Sortowanie

prior - funkcja porównanie zawartości dwóch elementów w tablicy
~~~ 
function prior(array, index, index2) {
  if (array[index] <= array[index2]) {
	return true;
  }

  return false;
}
~~~

swap - funkcja na zamienia zawartości dwóch elementów w tablicy
~~~
function swap(array, index, index2) {
  temp = array[index1];
  array[index1] = array[index2];
  array[index2] = temp;
}
~~~
Sortowanie bąbelkowe 
~~~
function bubbleSort(array, size) {
   for (i= 0; i < size - 1; i++) {
		for (j = size - 1; j > i; j--) {
			if (prior(array[j], array[j-1])) {
				swap(array, j, j-1);
}
}
}
}
~~~
Sortowanie przez wstawianie
~~~
function insertionSort(array, size) {
   for (i= 0; i < n - 1; i++) {
		for (j = i; j > 0 && prior(array[j], array[j-1]); j--) {
			swap(array, j, j-1);
}
}
}
~~~
Sortowanie przez wymiana
~~~
function selectionSort(array, size) {
   for (i= 0; i < n - 1; i++) {
		lowIndex = i;
		for (j = n-1; j > i; j--) {
			if (prior(array[j], array[lowIndex])) {
				lowIndex = j
				swap(array, i, lowIndex);
			}
}
}
}

~~~
Sortowanie scalaniem(standartowy)
~~~~
function mergeSort(array, tempArray, left, right) {
   if (left == right) return;
   mid = (left + right) / 2;
   mergeSort(array, temp, left, mid);
   mergeSort(array, temp, mid+1, right);
   for (i= left; i < right1; i++) {
     temp[i] = array[i];
   }
   i1 = left; i2 = mid + 1;
   for (curr = left; curr <= right; curr++) {
     if (i1 == mid + 1) {
		array[curr] = temp[i2++];
     } else if (i2 > right) {
      	array[curr] = temp[i1++];
     } else if (prior(temp[i1], temp[i2])) {
     	array[curr] = temp[i1++];
     } else {
       array[curr] = temp[i2++];
     }
   }
}
~~~~
Sortowanie scalaniem(optymyzowany)
~~~~
function mergeSortOpt(array, tempArray, left, right) {
   if (left - right <= THRESHOLD) {
     insertionSort(&array[left], right-left+1);
   }
   i, k, j, mid = (left + right) / 2;
   mergeSort(array, temp, left, mid);
   mergeSort(array, temp, mid+1, right);
   for (i= mid; i >= left; i--) {
     temp[i] = array[i];
   }
   for (j= 1; j <= right - mid; j++) {
     temp[right - j + 1] = array[j + mid];
   }
   for (i= left, j= right, k= left; k <= right; k++) {
     if (prior(temp[i], temp[j])) {
		array[k] = temp[i++];
     } else {
      	array[k] = temp[j--];
     }   
   }
}
~~~~
Sortowanie scalaniem(merge oraz mergeSort)
~~~
function subArray(array, start, end) {
    size = end - start;
	result[size];
    i = 0;
	while (i < size) {
result[i] = array[start + i];
i++;
}
return result;
}

function mergeSort(array, size) {
   if (size <= 1) return subArray(array, 0, size);

   m = size / 2; 

   return merge(mergeSort(subArray(array, 0, m), m), m, mergeSort(subArray(array, m, size), size - m), size - m);
}
~~~
Sortowanie szybkie(partition i findPivot)
~~~
function partition(array, left, right, pivot) {
   while (left <= right) {
      while (prior(pivot, array[left])) {
         left++;
      }
      while (prior(array[right], pivot)) {
         right--;
      }
      if (left <= right) {
			  swap(array, left, right);
              left++;
              right--;
     }
   }
   return left;
}

function findPivot(array, i, j) {
	return ((i + j ) / 2);
}
~~~
Sortowanie szybkie(quickSort)
~~~~
function quickSort(array, left, right) {
   if (right <= left) {
		return;
   }

   pivotIndex = findPivot(array, left, right); 
   swap(array, pivotIndex, right);
   k = partition(array, left- 1, right, array[right]);
   swap(array, k, right);
   quickSort(array, left, k - 1);
   quickSort(array, k + 1, right);
}
~~~~
Sortowanie przez zliczanie
~~~~
function countingSort(array, size, max) {
   result = []; count = []
   for (i = 0; i < max; i++) {
     count[i] = 0; 
   }

   for (j = 0; j < size; j++) {
     count[array[j]] = array[j] + 1; 
   }

   for (i = 0; i < max; i++) {
     count[i] = count[i] + count[i - 1]; 
   }

   for (j = size - 1; j > 0; j--) {
     result[count[array[j]] - 1] = array[j]; 
	 count[array[j]] = count[array[j]] - 1;
   }
   return result;
}
~~~~
Sortowanie pozycyjne
~~~~
function radixSort(array, max) {
	for (j = 1; j < max; j++) {
		count[10] = {0}

		for (i = 0; i < n; i++) {
			count[key of (array[i] in pass j)]++
}

for (k = 0; k < 10; k++) {
			count[k] = count[k] + count[k - 1]
}

for (i = n - 1; i > 0; i--) {
	result[ count[key of (array[i])] ] = array[j]
    count[key of (array[i])]--;
}
for (i = 0; i < n; i++) array[i] = result[i]
}
}
~~~~
