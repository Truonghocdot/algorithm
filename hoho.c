#include <stdio.h>
#include <stdlib.h>

int summaryFrom1ToN (int n) {
	if(n<2) return 1;
	return n + summaryFrom1ToN(n - 1);
}

void inputArray (int a[], int n){
	for(int i1 = 0; i1 < n;i1++) {
		printf("Type the value of a[%d] = ",i1);
		scanf("%d",&a[i1]);
	} 
}

void outputArray (int a[], int n) {
	for(int i1 = 0; i1 < n;i1++) {
		printf("The value of a[%d] = %d\n",i1,a[i1]);
	}
}

void bubbleSort (int a[], int n) {
	for(int i1 = 0; i1 < n - 1; i1++) {
		for(int i2 = 0; i2 < n - 1 -i1; i2++){
			if(a[i2] > a[i2 + 1]){
				int temp = a[i2 + 1];
				a[i2 + 1] = a[i2];
				a[i2] = temp;
			}
		}
	}
}

int searchBinary (int a[], int n, int x) {
	int l = 0;
	int r = n - 1;
	while(l < r) {
		int m = (l + r)/2;
		if(a[m] == x){
			return 1;
		}else if(a[m] < x){
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	
	return 0;
}
int main() {
	int n, x;
	printf("Type the value of n do you want "); 
	scanf("%d",&n);
	int* a = (int*)malloc(n * sizeof(int));
	inputArray(a,n);
	bubbleSort(a,n);
	outputArray(a,n);
	printf("Type the value do you want search ");
	scanf("%d",&x);
	int res = searchBinary(a,n,x);
	if(res == 1){
		printf("Have %d int array a",x);
	}else{
		printf("Not have %d int array a",x);
	}
	
//	printf("The value of summary from 1 to %d = %d",n, sum );
	
}

