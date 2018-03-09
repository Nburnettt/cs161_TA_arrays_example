#include <iostream>
#include <string>

using namespace std;

void print_array_1d_stack(int array_1d_stack[], int cols){
    cout << "Array 1d Stack:" << endl;
    for(int x = 0; x < cols; x++)
        cout << array_1d_stack[x] << ",\t";
    cout << endl;
}

void print_array_1d_heap(int* array_1d_heap, int cols){
    cout << "Array 1d Heap:" << endl;
    for(int x = 0; x < cols; x++)
        cout << array_1d_heap[x] << ",\t";
    cout << endl;
}

/* Notice 10 must be hard coded value */
void print_array_2d_stack(int array_2d_stack[][10], int rows, int cols){
    cout << "Array 2d Stack:" << endl;
    for(int y = 0; y < rows; y++){
        for(int x = 0; x < cols; x++)
            cout << array_2d_stack[y][x] << ",\t";
        cout << endl;
    }
}
void print_array_2d_heap(int** array_2d_heap, int rows, int cols){
    cout << "Array 2d Heap:" << endl;
    for(int y = 0; y < rows; y++){
        for(int x = 0; x < cols; x++)
            cout << array_2d_heap[y][x] << ",\t";
        cout << endl;
    }
}

void fill_array_1d_stack(int array_1d_stack[], int cols){
    for(int x = 0; x < cols; x++)
        array_1d_stack[x] = x + 1;
}

void fill_array_1d_heap(int* array_1d_heap, int cols){
    for(int x = 0; x < cols; x++)
        array_1d_heap[x] = x + 1;
}

/* Notice 10 must be hard coded value */
void fill_array_2d_stack(int array_2d_stack[][10], int rows, int cols){
    for(int y = 0; y < rows; y++)
        for(int x = 0; x < cols; x++)
            array_2d_stack[y][x] = (y+1) * (x+1);
}

void fill_array_2d_heap(int** array_2d_heap, int rows, int cols){
    for(int y = 0; y < rows; y++)
        for(int x = 0; x < cols; x++)
            array_2d_heap[y][x] = (y+1) * (x+1);
}

int main(){
    int cols = 10, rows = 20;

    int   array_1d_stack[cols];
    int*  array_1d_heap = new int[cols];
    int   array_2d_stack[rows][10];
    int** array_2d_heap = new int*[rows];
    for(int i = 0; i < rows; i++)
        array_2d_heap[i] = new int[cols];

    fill_array_1d_stack(array_1d_stack, cols);
    fill_array_1d_heap(array_1d_heap, cols);
    fill_array_2d_stack(array_2d_stack, rows, cols);
    fill_array_2d_heap(array_2d_heap, rows, cols);

    print_array_1d_stack(array_1d_stack, cols);
    print_array_1d_heap(array_1d_heap, cols);
    print_array_2d_stack(array_2d_stack, rows, cols);
    print_array_2d_heap(array_2d_heap, rows, cols);

    delete [] array_1d_heap;
    for(int i = 0; i < rows; i++)
        delete [] array_2d_heap[i];
    delete [] array_2d_heap;

    array_1d_heap = NULL;
    array_2d_heap = NULL;
}
