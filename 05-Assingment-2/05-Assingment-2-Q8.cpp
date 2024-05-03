double getAverage(int arr[], int size); // Function prototype

int main() {
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    //avg = getAverage( balance[0], 5 ) ; // Error: Passing integer instead of array to the function
    avg = getAverage(balance, 5); // Corrected line
    cout << "Average value is: " << avg << endl;
    return 0;
}

double getAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}
