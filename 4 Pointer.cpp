#include<iostream>
#include<memory>
using namespace std;

//! ------- Void Pointer
// int printInt(int* intPtr){
//     cout << "Int = " << *intPtr << endl;
// }

// int printChar(char* charPtr){
//     cout << "Char = " << *charPtr << endl;
// }

// void print(void* ptr, char type){
//     switch(type){
//         case 'c': cout << "Char = " << *((char*)ptr) << endl; break;
//         case 'i': cout << "Int = " << *((int*)ptr) << endl; break;
//         case 'f': cout << "Float = " << *((float*)ptr) << endl; break;
//         case 'd': cout << "Double = " << *((double*)ptr) << endl; break;
//     }
// }


//! ------- Return multiple values from function
// int min(int numbers[]){
//     int min = numbers[0];
//     for(int i = 1; i < 5; i++)
//         if(numbers[i] < min)
//            min = numbers[i];
//     return min;       
// }

// int max(int numbers[]){
//     int max = 0;
//     for(int i = 0; i < 5; i++)
//        if(numbers[i] > max)
//           max = numbers[i];
//     return max;       
// }

// int getMinAndMax(int numbers[], int* min, int* max){
//     for(int i = 0; i < 5; i++)
//         if(numbers[i] < *min)
//            *min = numbers[i];
//     for(int i = 0; i < 5; i++)
//         if(numbers[i] > *max)
//            *max = numbers[i];       
// }


//! ------- Memory leaks
// int memoryLeaks(){
//     int* memory = new int[50000];
//     memory[12] = 1001;
//     delete[] memory;
// }


//! ------- Function pointers
int getNumber(int a, int b){
    return a + b;
}



int main(){

    //! ------- Introduction
    // int i = 10;
    // int*ptr = &i;
    // cout << *ptr;
    // *ptr = 20;
    // cout << *ptr << ' ' << i;

    // int j;
    // int*ptr2 = &j;
    // cout << *ptr2;
    // *ptr2 = 30;
    // cout << *ptr2 << ' ' << j;


    //! ------- Void Pointer
    // Is a void that can hold address of any other type of address but we can't easily dereference it.
    // int integer = 10;
    // printInt(&integer);
    // char character = 'a';
    // printChar(&character);
    // print(&integer, 'i');
    // print(&character, 'c');


    //! ------- Pointer and Arrays
    // int array[] = {1, 2, 3, 4, 5};
    // cout << array << endl;
    // cout << &array[0] << endl; // array behaves like a pointer and square brackets behaves like a dereference operator
    // cout << array[2] << endl;
    // cout << *(array + 3) << endl;

    // for(int i = 0; i < 5; i++)
    //    cout << *(array + i) << ' ';


    //! ------- Return multiple values from function
    // int numbers[] = {1, 2, 3, 4, 5};
    // cout << "Min = " << min(numbers) << endl;
    // cout << "Max = " << max(numbers) << endl;

    // * 1st method
    // int min = 0, max =0;
    // int *minPtr = &min;
    // int *maxPtr = &max;
    // getMinAndMax(numbers, minPtr, maxPtr);

    // * 2nd method
    // int min = 0, max =0;
    // getMinAndMax(numbers, &min, &max);
    // cout << "Min = " << min << endl;
    // cout << "Max = " << max << endl;


    //! ------- Dynamic Arrays || Create/ change at runtime
    // int size;
    // cout << "Size: ";
    // cin >> size;
    // // int array[size];
    // int* dynamicArray = new int[size];

    // for(int i = 0; i < size; i++)
    //     cin >> dynamicArray[i];

    // for(int i = 0; i < size; i++)
    //     cout << dynamicArray[i] << ' ';

    // delete[] dynamicArray; // Array lies in memory that will not belong to you anymore therefore we appoints it to NULL || We are not want to do it accidental crashes in our programs
    // dynamicArray = NULL;      


    //! ------- Multidimensional dynamic arrays
    // int** dynamicArray = new int*[4];
    // for(int i = 0; i < 4; i++){
    //     dynamicArray[i] = new int[4];
    //     for(int j = 0; j < 4; j++){
    //         dynamicArray[i][j] = 3;
    //     }
    // }

    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 4; j++)
    //         cout << dynamicArray[i][j] << '\t';
    //     cout << endl;            
    // }

    // for(int i = 0; i < 4; i++){
    //     delete[] dynamicArray[i];
    // }
    // delete[] dynamicArray;

    


    //! ------- Memory Leaks
    // memoryLeaks(); 


    //! ------- Function pointers
    // Function pointers hold the address of the function instead of variables || We use function pointer in order to we able to pass an function as an argument or as an parameter to another function we do this to optimize our code

    // cout << getNumber << ' '; // Name of the function give it's address
    // int(*funcPtr)() = getNumber;
    // cout << funcPtr() << ' ';

    // int(*funcPtr)(int, int) = getNumber;
    // cout << getNumber(5, 5) << ' ' << funcPtr(5, 5);


    //! ------- Dynamically resize an array
    // int* numbers = new int[5];
    // int entires = 0, capacity = 0;
    // while (true)
    // {
    //     cout << "Number: ";
    //     cin >> numbers[entires];
    //     if(cin.fail()) break;
    //     entires++;
    //     if(entires == capacity){
    //         capacity *= 2;
    //         int* temp = new int[capacity];
    //         for(int i = 0; i < capacity; i++){
    //             temp[i] = numbers[entires];
    //         }
    //         delete[] numbers;
    //         numbers = temp;
    //     }
    // }

    // for(int i = 0; i < entires, i++)
    //     cout << numbers[i] << endl;
    // delete[] numbers;


    //! ------- Smart pointers: 
    //!1) Unique || We can't do arithmetic on it
    unique_ptr<int> unqPtr(new int);
    *unqPtr = 20;
    cout << *unqPtr << ' ';

    auto numbers = make_unique<int[]>(10);
    numbers[0] = 10;
    cout << numbers[0] << ' ';

    //! 2) Shared
    auto x = make_shared<int>();
    *x = 10;
    shared_ptr<int> y(x);
    if(x == y)
       cout << "Equal";
}