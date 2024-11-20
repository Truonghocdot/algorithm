#include <stdio.h>
#include <stdlib.h> // Include for malloc and free

int SummaryOfn(int n) {
    if (n < 2) return 1;
    return n + SummaryOfn(n - 1);
}

void InputArray(int n[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Type the value for part of index %d = ", i + 1);
        scanf("%d", &n[i]);
    }
}

void bubbleSort(int n[], int size) {
    for (int i1 = 0; i1 < size - 1; i1++) {
        for (int i2 = 0; i2 < size - i1 - 1; i2++) {
            if (n[i2] > n[i2 + 1]) {
                int temp = n[i2];
                n[i2] = n[i2 + 1];
                n[i2 + 1] = temp;
            }
        }
    }
}

void outputArray(int n[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nValue of the array at index %d: %d", i + 1, n[i]);
    }
}

bool BinarySearch (int n[], int size, int x ) {
	int l = 0, r = size - 1;
	while(l < r) {
		int m = (l + r)/2;
		if(n[m] == x) {
			return true;
		}else if(n[m] < x){
			l = m + 1;
		}else {
			r = m - 1;
		}
	}
	
	return false;
}

int main() {
    printf("Type the length of array: ");
    int n;
    scanf("%d", &n);

    // Allocate array dynamically to avoid potential issues
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    InputArray(a, n);
    bubbleSort(a, n);
    outputArray(a, n);
    int x ;
    printf("\nType value which do you want to search:");
    scanf("%d",&x);
    
	if(BinarySearch(a,n,x)){
		printf("In array have the value do you want to search");
	}else {
		printf("In array not have the value do you want to search");
	}
    // Free dynamically allocated memory
    free(a);

    // Uncomment if you want to use the SummaryOfn function
    // int sum = SummaryOfn(n);
    // printf("\nValue of summary from 1 to %d = %d", n, sum);

    return 0;
}
