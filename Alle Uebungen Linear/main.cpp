#include <iostream>

using namespace std;

void foo (int *array,int size){
    int sum=  0;
    int product=  1;
    for(int i=0;i<size;i++)
    sum += array[i] ;
    for(int i=0;i < size; i++)
    product = array[i];
    cout << sum << "," << product << endl;
}

class ArrayUtil{
    public:
    static long multiplyArrayValues(const long* values, const int ARRAY_SIZE);

};

long ArrayUtil::multiplyArrayValues(const long* values, const int ARRAY_SIZE){
    long* Newvalues;
    Newvalues = new long[ARRAY_SIZE];

    for(int i =0; i< ARRAY_SIZE; i++){
        Newvalues[i] = Newvalues[i];
    }



}

int main() {
    //
    clock_t start, stop;
    int size = 5;
    int *Aufg1;
    Aufg1 = new int[size];
    for (int i = 0; i < size; i++){
        Aufg1[i] = i;
    }
    start = clock();
    foo(Aufg1, size);
    stop = clock();
    //



    if (((double) (stop - start) / CLOCKS_PER_SEC) < 0.00001) {
        double runden = ((double) (stop - start) / CLOCKS_PER_SEC) * 1000000;
        cout << endl << "Zeit : " << runden << " mikro sekunden";
    } else if (((double) (stop - start) / CLOCKS_PER_SEC) < 0.0001) {
        double runden = ((double) (stop - start) / CLOCKS_PER_SEC) * 1000000;
        cout << endl << "Zeit : " << runden << " mikro sekunden";
    } else if (((double) (stop - start) / CLOCKS_PER_SEC) < 0.001) {
        double runden = ((double) (stop - start) / CLOCKS_PER_SEC) * 1000000;
        cout << endl << "Zeit : " << runden << " mikro sekunden";
    } else if (((double) (stop - start) / CLOCKS_PER_SEC) < 0.01) {
        double runden = ((double) (stop - start) / CLOCKS_PER_SEC) * 1000;
        cout << endl << "Zeit : " << runden << " milli sekunden";
    }
    else if (((double) (stop - start) / CLOCKS_PER_SEC) < 0.1) {
        double runden = ((double) (stop - start) / CLOCKS_PER_SEC) * 1000;
        cout << endl << "Zeit : " << runden << " milli sekunden";
    }
    else if (((double) (stop - start) / CLOCKS_PER_SEC) < 1) {
        double runden = ((double) (stop - start) / CLOCKS_PER_SEC) * 1000;
        cout << endl << "Zeit : " << runden << " milli sekunden";
    }
    else if (((double) (stop - start) / CLOCKS_PER_SEC) > 1) {
        double runden = ((double) (stop - start) / CLOCKS_PER_SEC);
        cout << endl << "Zeit : " << runden << " sekunden";
    }

    return 0;
}