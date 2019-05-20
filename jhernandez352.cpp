 #include <iostream>

using namespace std;
//My insertionSort algorith that prints out every step of the sorting process.
//Referenced sudo code from pg. 18 of textbook.
void printStep(int *out, int range) {
	for (int l = 0; l <= range; l++) {
		cout << out[l] << ";";
	}
	cout << endl;
}
void insertionSortPrint(int *data, int size){
	//loops through every integer in the array.
	for(int j = 1; j < size; j++){
		int temp = data[j];
		//number of numbers that we need to check.
		int k = j - 1;
		//This will iterate through all the numbers we need to check.
		while( k >= 0 && data[k] > temp){
			//shift the value to the right.
			data[k + 1] = data[k];
			//move to the next integer.
			k--;
		}
		data[k + 1] = temp;
		//Print current sorted numbers from [0...j]. int j should be the index of the last sorted number.
		printStep(data, j);
	}
}
int main(int argc, char **argv){
	//initialize size.
	int size;
	cin >> size;
	//initialize array.
	int *data = new int[size];
	//Store elements in arr.
	for(int i = 0; i < size; i++){
		cin >> data[i];
	}
	//call insertionSortPrint.
	insertionSortPrint(data, size);
	//Delete array.
	delete[] data;
	return 0;
}