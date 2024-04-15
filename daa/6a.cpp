#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int count = 0;
void swap(int *a, int *b){
	count++;
	int temp = *a;
	count++;
	*a = *b;
	count++;
	*b = temp; 
}
int partition(int arr[], int low, int high){
	count++;
	int pivot = arr[high];
	count++;
	int i = low-1;
	count++;
	for(int j = low; j<=high-1; j++){
		count++;
		count++;
		if(arr[j] < pivot){
			count++;
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	count++;
	return i+1;
}

int quick(int arr[], int low, int high){
	count++;
	if(low < high){
		int pi = partition(arr, low, high);
		quick(arr, low, pi-1);
		quick(arr, pi+1, high);
	}
	return count;
}
void printarr(int arr[], int size){
	for(int i=0;i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	srand(time(NULL));
	cout<<"enter the n value:";
	int n;
	cin>>n;
	int arr1[n];
	for (int i = 0; i < n; ++i) {
        arr1[i] = rand() % 100 + 1;
    }
    for(int j = 0; j < n; ++j){
        cout<<arr1[j]<<" ";
    }
	quick(arr1, 0, n-1);
	cout<<"sorted array:"<<endl;
	printarr(arr1, n);
    cout<<"step count: "<<count<<endl;
}