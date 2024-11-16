## Q. What is Programming & Why C++?

**Programming** is the process of designing and writing instructions that a computer can execute to perform specific tasks. It allows us to translate our ideas into a form that machines can understand and act upon. 

**Why C++?**

C++ was created by Bjarne Stroustrup in 1979. It is valued for its:
- **Proximity to Hardware**: C++ provides low-level access to memory and hardware, allowing for efficient memory management and faster execution of programs.
- **Performance**: It is used in performance-critical applications like system software, game development, and real-time systems due to its ability to offer fine-grained control over system resources.

## Q. Files Structure in C++

In C++, the organization of files is crucial for managing and structuring code effectively:

- **Header Files** (`.h` or `.hpp`): These files contain declarations for functions, classes, and other identifiers. `#include<iostream>` includes the standard library for input and output operations. Header files promote code reuse and modularity by allowing shared declarations across multiple source files.

- **Source Files** (`.cpp`): These files contain the definitions of the functions and classes declared in header files. They provide the implementation details and include the necessary header files.

- **Main Function**: The entry point of a C++ program is the `main` function, where the execution of the program begins. 

Overall, a typical C++ program consists of:
- Header files for declarations
- Source files for definitions
- The `main` function to start execution

## Q. What do Low Level and High Level Mean?

**High Level**: Think of high-level as using a search engine like Google. You get results quickly and easily without needing to understand how the search engine works behind the scenes. High-level languages are like this—they're designed to be easy for people to use and understand.

**Low Level**: This is like looking at the inner workings of a computer, where everything is represented in binary code (0s and 1s). Low-level operations are closer to the hardware and involve more detailed and complex processes.

In summary, high-level is user-friendly and abstract, while low-level is more detailed and close to the hardware.

## Q. What are Variables and Comments?

**Variables**: Think of variables as labeled boxes where you can store information. If you have a box labeled `age`, you can put a number in it to represent someone's age. Variables can hold different types of data, like numbers (`int`), decimal values (`float`), or characters (`char`).

**Comments**: Comments are like sticky notes you put in your code to explain what’s happening. They don’t affect how the program runs—they’re just there for anyone reading the code to understand it better. You might write a comment to explain why a certain piece of code is there or what a variable is used for.

## Q. Variable Scope

The scope of a variable defines where in the code you can use it. You can think of it like this: if you’re in a specific room, you can only use the items in that room. Similarly, a variable's scope determines where it can be accessed in your program.

- **Local Variables**: These are variables declared inside a function. They can only be used within that function. Just like a key you only use in one room, local variables are only usable where they're defined.

- **Global Variables**: These are declared outside of any function and can be used anywhere in your code. Like a master key that opens all rooms, global variables are accessible from any part of the program.

## Q. What are Data Types?

Data types specify the kind of data a variable can hold. This helps the program understand what type of information to store and how to use it. 

In C++, data types are divided into three main groups:

- **Built-in Data Types**: These are the basic types provided by the language.
  - `int`: Stores whole numbers, like 5 or -3.
  - `float`: Holds numbers with decimal points, like 3.14 or -0.001.
  - `char`: Stores single characters, like 'a' or 'Z'.
  - `double`: Similar to `float`, but with more precision for larger or more precise decimal numbers.
  - `bool`: Represents true or false values.

- **User-Defined Data Types**: These allow you to create custom data types.
  - `struct`: Groups different types of data under one name, like a record with a name, age, and address.
  - `union`: Lets you store different types of data in the same space, but only one at a time.
  - `enum`: Defines a set of named values, making the code easier to read, like days of the week or colors.

- **Derived Data Types**: These are built from basic types.
  - `array`: A collection of items of the same type, like a list of numbers.
  - `pointer`: Stores the address of another variable, helping you manage memory efficiently.
  - `function`: Defines a block of code that performs a specific task and can be used repeatedly.

Understanding these types helps in writing effective and efficient code by choosing the right type for each variable.

## Q. What are Reserved Keywords in C++?

Reserved keywords are predefined words in C++ that have a specific purpose and meaning within the language. These keywords are part of the language's syntax and are used to perform various tasks, such as defining functions, controlling the flow of a program, and more. 

Because these words have special roles, you cannot use them as names for variables, functions, or other user-defined identifiers in your code. Attempting to use a reserved keyword in this way will result in a compile-time error.

Example:
- `int`, `float`, `if`, `while`, and `return` are reserved keywords.

- **`int`**: Used to define integer variables.
- **`float`**: Used for floating-point numbers.
- **`if`**: Used for conditional statements.
- **`while`**: Used for looping.
- **`return`**: Used to return values from functions.

- The sign `<<` is called the insertion operator, used for output in streams.
- The sign `>>` is called the extraction operator, used for input in streams.

## Q. What is the Purpose of Header Files in C++?

Header files in C++ are used to declare the functions, classes, and variables that can be shared between different files in a program. They help organize code and allow for code reuse. 

Here's how header files work:

- **System Header Files**:
  These are provided by the C++ standard library or compiler. `#include <iostream>` includes the standard input/output stream library, which provides functionalities like `cout` for output and `cin` for input. You don't need to write these files yourself; they come with the compiler. More details can be found at [cppreference.com](https://en.cppreference.com/w/cpp/header).

- **User-Defined Header Files**:
  These are created by programmers to include custom functions or classes that they want to use across multiple files. To use a user-defined header file, you need to include it in your program with `#include "filename.h"`, where `"filename.h"` is the name of your header file located in the current directory or project.

Summary, header files help in separating the declaration of functions and classes from their implementation, promoting better code organization and reuse.


## Q. What are Operators and Their Different Types in C++?

Operators are symbols in C++ that perform operations on variables and values. They help you carry out tasks such as calculations, comparisons, and logical operations. Here are the different types of operators:

- **Arithmetic Operators**:
  These operators are used for basic mathematical operations.
  - `+` : Addition (e.g., `a + b`)
  - `-` : Subtraction (e.g., `a - b`)
  - `*` : Multiplication (e.g., `a * b`)
  - `/` : Division (e.g., `a / b`)
  - `%` : Modulus (e.g., `a % b`, which gives the remainder of `a` divided by `b`)
  - `++` : Increment (e.g., `a++` increases `a` by 1)
  - `--` : Decrement (e.g., `a--` decreases `a` by 1)

- **Assignment Operators**:
  These operators are used to assign values to variables.
  - `=` : Basic assignment (e.g., `a = 10`)
  - `+=` : Add and assign (e.g., `a += 5` is equivalent to `a = a + 5`)
  - `-=` : Subtract and assign (e.g., `a -= 3` is equivalent to `a = a - 3`)
  - `*=` : Multiply and assign (e.g., `a *= 2` is equivalent to `a = a * 2`)
  - `/=` : Divide and assign (e.g., `a /= 4` is equivalent to `a = a / 4`)
  - `%=` : Modulus and assign (e.g., `a %= 3` is equivalent to `a = a % 3`)

- **Comparison Operators**:
  These operators are used to compare two values and return a boolean result.
  - `==` : Equal to (e.g., `a == b`)
  - `!=` : Not equal to (e.g., `a != b`)
  - `>` : Greater than (e.g., `a > b`)
  - `<` : Less than (e.g., `a < b`)
  - `>=` : Greater than or equal to (e.g., `a >= b`)
  - `<=` : Less than or equal to (e.g., `a <= b`)

- **Logical Operators**:
  These operators are used to combine or invert boolean expressions.
  - `&&` : Logical AND (e.g., `(a == b) && (a > c)`, true if both conditions are true)
  - `||` : Logical OR (e.g., `(a == b) || (a > c)`, true if at least one condition is true)
  - `!` : Logical NOT (e.g., `!(a == b)`, true if the condition is false)

Summary, operators help you perform various operations on data and variables, making them essential for programming tasks.

## Q. What are Built-in Data Types in C++?

Built-in data types in C++ are predefined by the language and are used to store simple, fundamental types of data. Here are some of the common built-in data types:
- `int` : Stores integer values (e.g., `1`, `-10`, `42`).
- `float` : Stores single-precision floating-point numbers (e.g., `3.14`, `-0.001`).
- `char` : Stores single characters (e.g., `'a'`, `'1'`, `'$'`).
- `double` : Stores double-precision floating-point numbers (e.g., `3.1415926535`).
- `bool` : Stores boolean values (either `true` or `false`).

## Q. What is the Difference Between `float`, `double`, and `long double` Literals?

- **`float`**: Holds single-precision floating-point numbers. It uses less memory (typically 4 bytes) and provides less precision compared to `double` and `long double`. `3.14f` is a `float` literal.
- **`double`**: Holds double-precision floating-point numbers. It uses more memory (typically 8 bytes) and provides more precision than `float`. `3.14159265358979` is a `double` literal.
- **`long double`**: Holds extended-precision floating-point numbers, offering even more precision and a larger range than `double`. It can use more memory (typically 12 or 16 bytes) and is useful for high-precision calculations.

By default, floating-point literals (e.g., `3.14`) are treated as `double` in C++.

## Q. What are Reference Variables in C++?

Reference variables are essentially alternative names for existing variables. They provide a way to refer to a variable using a different name, which can be useful for accessing or modifying the original variable directly. Reference variables are defined using the `&` symbol. 

Example:
```cpp
int original = 10;
int &ref = original; // 'ref' is a reference to 'original'
ref = 20; // This will also change 'original' to 20
```

## Q. What is Typecasting in C++?

Typecasting is the process of converting a variable from one data type to another. This is useful when you need to perform operations that require specific data types or when you want to ensure compatibility between different data types.

In C++, you can perform typecasting using different syntax:
- **C-style cast**: `(float)a` - This converts the variable `a` to a `float`.
- **Functional cast**: `float(a)` - This is another way to convert `a` to a `float`.

Typecasting helps in performing precise operations, especially when dealing with mixed data types.

## Q. How Do You Use the Scope Resolution Operator in C++?

The scope resolution operator `::` is used to access global variables or functions from within a function or class where there might be local variables or functions with the same name. It helps in distinguishing between different scopes.

Here’s how it works:
- To access a global variable or function from within a class or function, you use `::` to specify the global scope.

Example:
```cpp
int value = 10; // Global variable

class Example {
public:
    int value; // Local variable

    void show() {
        std::cout << "Local value: " << value << std::endl;
        std::cout << "Global value: " << ::value << std::endl; // Access global variable
    }
};

int main() {
    Example obj;
    obj.show();
}
```

## Q. What are constants, manipulators, and operator precedence in C++?

- **Constants**  
  Constants are unchangeable; once a constant variable is initialized in a program, its value cannot be changed afterwards.

- **Manipulators**  
  Manipulators are used for formatting output:
  - `endl`: Moves to the next line.
  - `setw`: Specifies the width of the output.

- **Operator Precedence & Operator Associativity**  
  - **Operator Precedence**  
    Determines the order of operations in an expression. In `int c = a * b + c`, multiplication (`*`) has higher precedence than addition (`+`).

  - **Operator Associativity**  
    Resolves the order of operations when operators have the same precedence. Associativity can be "left-to-right" (left associative) or "right-to-left" (right associative). For instance, in the expression `a - b - c`, subtraction is left associative, so it's evaluated as `(a - b) - c`.
 
## Q. What are Control Structures in C++?

Control structures in C++ manage the flow of execution within a program. They allow you to make decisions, repeat actions, and control the execution path based on certain conditions.

- **Sequence Structure**  
  Executes instructions sequentially, one after another.

- **Selection Structure**  
  Chooses instructions based on conditions.
  - Implemented using if-else statements or switch-case statements.

- **Loop Structure**  
  Repeats instructions until a condition becomes false.

## Q. What are the differences between for, while, and do-while loops in C++?

### For Loop
- Ideal for situations where the number of iterations is known beforehand.
- Syntax:
  ```cpp
  for (initialization; condition; increment/decrement) {
      // code to be executed
  }
  ```
### While Loop
- Useful when the number of iterations is not known and depends on a condition being met.
- Syntax:
  ```cpp
  while (condition) {
      // code to be executed
  }
  ```
### Do-While Loop
- Similar to the while loop, but the condition is evaluated after the code block executes, ensuring that the loop body is executed at least once.
- Syntax:
  ```cpp
  do {
      // code to be executed
  } while (condition);
  ```
  
## Q. What is the difference between the break and continue statements in C++?

### Break Statement
- Terminates the loop entirely.
- Example:
  ```cpp
  for (int i = 0; i < 10; i++) {
      if (i == 5) {
          break; // Exits the loop when i is 5
      }
      cout << i << " ";
  }
  ```
### Continue Statement
- Skips the current iteration of the loop and proceeds with the next iteration.
- Example:
  ```cpp
  for (int i = 0; i < 10; i++) {
      if (i == 5) {
          continue; // Skips the rest of the loop body when i is 5
      }
      cout << i << " ";
  }
  ```

## Q. What is a pointer in C++ and how is it used? Additionally, describe what a pointer to a pointer is.

A pointer is a data type that holds the address of another data type. The `&` operator is called the "address of" operator, and the `*` operator is called the "dereference" operator.

### Applications of a Pointer
- **Dynamic Memory Allocation**: Pointers are used to allocate and deallocate memory dynamically.
- **Container Access**: They can point to arrays, structs, or other containers, and can pass the address of these containers to functions.
- **Return Multiple Values**: Pointers can be used to return multiple values from a function.
- **Efficient Memory Usage**: Passing pointers instead of copies of containers reduces memory usage.
- **Performance**: Using pointers can reduce code complexity and improve performance.

### Pointer to a Pointer
A pointer to a pointer is a variable that stores the address of another pointer. This concept allows you to handle multiple levels of indirection.

Example:
```cpp
// Define a variable and a pointer to it
int a = 3;
int* b = &a; // Pointer b holds the address of a

// Display the address and value of a using pointer b
cout << "The address of a is " << &a << endl;
cout << "The address of a is " << b << endl;
cout << "The value at address b is " << *b << endl;

// Pointer to pointer
int** c = &b; // Pointer c holds the address of pointer b
cout << "The address of b is " << &b << endl;
cout << "The address of b is " << c << endl; 
cout << "The value at address c is " << *c << endl; 
cout << "The value at address value_at(value_at(c)) is " << **c << endl;
```

## Q. What are Arrays in C++ and how do they work with pointers?

An array is a collection of items of the same type stored in contiguous memory locations.

### Arrays and Pointers

- **Array Name as a Pointer**: The name of an array acts as a pointer to the first element of the array. This is different from storing the address of a single variable into a pointer. Therefore, using the `&` operator with the array name to assign it to a pointer is incorrect.
  - `&Marks` is incorrect.
  - `Marks` represents the address of the first element of the array.

Example:
```cpp
int marks[] = {23, 45, 56, 89}; // Array of integers

// Pointer to the first element of the array
int* p = marks;

// Accessing array elements using pointer
for (int i = 0; i < 4; i++)
    cout << *(p + i) << " ";

// Additional pointer arithmetic examples (commented out)
// cout << *(p++) << endl;
// cout << *(++p) << endl;
// cout << "The value of *p is " << *p << endl;
// cout << "The value of *(p+1) is " << *(p+1) << endl;
// cout << "The value of *(p+2) is " << *(p+2) << endl;
// cout << "The value of *(p+3) is " << *(p+3) << endl;
```

## Q. What are Struct, Union, and Enums in C++?

### Struct
A `struct` is a user-defined data type that groups different types of data together. It's similar to an array, but arrays group data of the same type. 

Example:
```cpp
struct employee {
    int eId;       // Employee ID
    char favChar;  // Favorite character
    int salary;    // Salary
};

int main() {
    employee Harry; // Creating an instance of the struct
    // Access struct members
    Harry.eId = 1;
    Harry.favChar = 'H';
    Harry.salary = 50000;
}
```

### Union
A `union` is similar to a struct, but it provides better memory management. All members of a union share the same memory location, so only one member can be used at a time.

Example:
```cpp
union money {
    int rice;     // Amount of rice
    char car;     // Car type
    float pounds; // Pounds of something
};

int main() {
    money m1;
    m1.rice = 34;  // Assigning value to rice
    cout << m1.rice; // Output the value of rice
}
```

### Enum
An `enum` (enumeration) is a user-defined data type that consists of named constants representing integral values. It makes programs more readable and manageable by defining a set of named values.

Example:
```cpp
enum Meal {
    breakfast, // 0
    lunch,     // 1
    dinner     // 2
};

int main() {
    Meal m1 = dinner; // Setting enum value
    if (m1 == 2) {
        cout << "The value of dinner is " << dinner << endl; // Output value of dinner
    }
}
```

## Q. What are Functions and Function Prototypes in C++?

### Functions
Functions are blocks of code designed to perform a specific task. They help in reusing code, making it easier to manage and debug. By breaking the code into smaller, manageable pieces, functions facilitate top-down structured programming.

Example:
```cpp
// Function to add two integers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int result = sum(5, 3); // Call the function
    cout << "Sum is: " << result << endl;
}
```

### Function Prototypes
A function prototype declares the function's name, return type, and parameters before the function's full implementation. This informs the compiler about the function's existence and how it should be used.

Example:
```cpp
// Function prototype
int sum(int a, int b); // Acceptable

// Incorrect prototypes
int sum(int a, b);    // Not acceptable
int sum(int, int);    // Acceptable but less descriptive
```

## Q. What are Actual and Formal Parameters?

### Formal Parameters
Formal parameters are the variables declared in a function's definition. They act as placeholders for the data that will be passed to the function.

Example:
```cpp
void add(int a, int b) {
    // a and b are formal parameters
    cout << "Sum is: " << a + b << endl;
}
```

### Actual Parameters
Actual parameters are the real values or variables passed to the function when it is called. They provide the function with the specific data it needs to work with.

Example:
```cpp
int num1 = 5, num2 = 3;
add(num1, num2); // num1 and num2 are actual parameters
```

## Q. What does it mean by Call by Value, Call by Reference, & Call by Pointer in C++?

### Call by Value
Call by value is a method in C++ where copies of the actual parameters are passed to the function. Changes made to the parameters inside the function do not affect the original values.

Example:
```cpp
int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y); // This will not swap x and y
    cout << "The value of x is " << x << " and the value of y is " << y << endl; 
}
```

### Call by Pointer
Call by pointer is a method where the address of the actual parameters is passed to the function. Changes made to the parameters inside the function will affect the original values.

Example:
```cpp
// Call by pointer
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapPointer(&x, &y); // This will swap x and y using pointer reference
    cout << "The value of x is " << x << " and the value of y is " << y << endl; 
}
```

### Call by Reference
Call by reference is a method where references of the actual parameters are passed to the function. Changes made to the parameters inside the function will affect the original values.

Example:
```cpp
// Call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapReferenceVar(x, y); // This will swap x and y using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl; 
}
```


## Q. What does it mean by Inline Functions, Default Arguments, & Constant Arguments in C++?

### Inline Functions
Inline functions are used to reduce the function call overhead. When a function is called multiple times in a program, it increases execution time. By using inline functions, the compiler replaces the function call with the function code itself, which can improve performance for small functions. However, inline functions are not recommended if they use static variables, as this can lead to inefficiency.

Example:
```cpp
inline int product(int a, int b){
    return a * b;
}

int main(){
    int a = 5, b = 10;
    cout << "The product of " << a << " and " << b << " is " << product(a, b) << endl;
}
```

### Default Arguments
Default arguments allow functions to be called with fewer arguments than they are defined to accept. If an argument is not provided, the default value is used. Default arguments should be specified after all other arguments in the function definition.

Example:
```cpp
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney * factor;
}

int main(){
    int money = 100000;
    cout << "If you have " << money << " Rs in your bank account, you will receive " 
         << moneyReceived(money) << " Rs after 1 year" << endl;
    cout << "For VIP: If you have " << money << " Rs in your bank account, you will receive " 
         << moneyReceived(money, 1.1) << " Rs after 1 year" << endl;
}
```

### Constant Arguments
Constant arguments are used to prevent a function from modifying the values of its arguments. This is useful for ensuring that data passed to a function remains unchanged.

Example:
```cpp
int strlen(const char *p){
    // Function implementation here
}

int main(){
    const char *str = "Hello, World!";
    cout << "The length of the string is " << strlen(str) << endl;
}
```

## Q. Recursion and Recursive Function in C++?

Recursion occurs when a function calls itself, either directly or indirectly. The function that performs this self-calling is known as a recursive function. Recursive functions typically have two main components:

1. **Base Case:** This is the condition under which the recursion stops. Without a base case, the function would continue calling itself indefinitely, leading to infinite recursion.

2. **Recursive Case:** This is the part of the function where the recursion occurs. It usually involves a function calling itself with modified arguments.

Example:
```cpp
// Recursive function to calculate factorial
int factorial(int n){
    if (n <= 1){
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive case
}

int main(){
    int number = 5;
    cout << "The factorial of " << number << " is " << factorial(number) << endl;
}
```

## Q. What is function overloading?

Function overloading in C++ allows multiple functions to have the same name but different parameters, including different numbers of parameters or different types. This enables functions to perform similar tasks with different types or amounts of input.

Example:
```cpp
// Function to add a float and an integer
int sum(float a, int b){
    cout << "Using function with 2 arguments" << endl;
    return a + b;
}

// Function to add three integers
int sum(int a, int b, int c){
    cout << "Using function with 3 arguments" << endl;
    return a + b + c;
}

int main(){
    float x = 2.5;
    int y = 3;
    int z = 4;

    cout << "Sum of float and int: " << sum(x, y) << endl;
    cout << "Sum of three integers: " << sum(y, z, 5) << endl;
}
```

## Q. What is OOP?

OOP stands for Object-Oriented Programming. It's a way of writing code that uses "objects" to represent real-world things or concepts. Each object can have its own data and functions (called methods) that work with that data.

The main goal of OOP is to make programs more organized, easier to maintain, and less prone to errors by grouping related data and functions together. In a program, you might have an object that represents a car. This car object can have data like its color and speed, and methods like drive or stop.

C++ was created to bring OOP features to the C language. This approach helps manage larger programs better by keeping related parts of the code together and protecting data from being accidentally changed by other parts of the program. This makes the code more like real-world scenarios and helps in maintaining data security.

### Key Concepts of OOP:

- **Encapsulation**: Bundling the data (attributes) and methods (functions) that operate on the data into a single unit, or class. This helps in hiding the internal state of the object and only exposing the necessary parts.
- **Inheritance**: Allows a new class to inherit properties and methods from an existing class. This promotes code reusability and creates a hierarchical relationship between classes.
- **Polymorphism**: The ability of different objects to be treated as instances of the same class through a common interface. It allows for methods to do different things based on the object it is acting upon.
- **Abstraction**: The concept of hiding complex implementation details and showing only the essential features of an object. It helps in reducing complexity and allows focusing on interactions at a higher level.

```cpp
class Car {
private:
    string color;
    int speed;

public:
    // Constructor
    Car(string c, int s) : color(c), speed(s) {}

    // Method to display car details
    void display() {
        cout << "Color: " << color << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }

    // Method to accelerate the car
    void accelerate(int increase) {
        speed += increase;
        cout << "Accelerating. New speed: " << speed << " km/h" << endl;
    }

    // Method to stop the car
    void stop() {
        speed = 0;
        cout << "Car stopped." << endl;
    }
};

int main() {
    Car myCar("Red", 50);

    myCar.display();
    myCar.accelerate(20);
    myCar.stop();
}
```

-----------------------------------------------------------------------------------------------------
## Visual Representations of OOP Concepts
| ![1  OOP](https://github.com/user-attachments/assets/64fdf2fb-118d-4703-b30d-993c743f1231) | ![2  OOP](https://github.com/user-attachments/assets/2599dc07-ab31-4de9-99ba-5853020e2ff0) | ![3  OOP](https://github.com/user-attachments/assets/7055b5f8-01f4-4cb7-b50f-fb90a941acb7) |
|:---:|:---:|:---:|
| ![4  OOP](https://github.com/user-attachments/assets/f3ff1e6d-3533-41cd-ab99-0dcf0b31548a) | ![5  OOP](https://github.com/user-attachments/assets/b0dcc35c-dd41-4b45-9fb5-8fb61287d767) | ![6  OOP](https://github.com/user-attachments/assets/51d55862-da1c-4364-85e1-09f8298cb048) |
-----------------------------------------------------------------------------------------------------

## Q. Difference between Procedure Oriented Programming and Object-Oriented Programming?

### Procedure-Oriented Programming (POP)
- **Focus:** Centers around functions or procedures.
- **Data Security:** Data is often global and less secure.
- **Structure:** Programs are structured as a sequence of steps or procedures.
- **Code Reusability:** Limited reusability of code due to a lack of modularity and encapsulation.

### Object-Oriented Programming (OOP)
- **Focus:** Centers around objects that bundle data and methods.
- **Data Security:** Data is encapsulated within objects, providing better security.
- **Structure:** Programs are structured around objects and classes.
- **Code Reusability:** Promotes reusability through mechanisms like inheritance and polymorphism.
 
## Q. Basic Elements in Object-Oriented Programming

- **Classes**: 
  - Basic template for creating objects.
  - Serve as the fundamental building blocks of OOP.
  - Define attributes and methods that objects can use.

- **Objects**: 
  - Basic run-time entities and instances of a class.
  - Represent individual elements of a class with specific states and behaviors.

- **Data Abstraction & Encapsulation**: 
  - **Data Abstraction**: Hides complex implementation details and shows only necessary features.
  - **Encapsulation**: Wraps data and functions into a single unit, providing a protective barrier around the data.

- **Inheritance**: 
  - Allows properties and behaviors of one class to be inherited by another.
  - Facilitates code reusability and the creation of hierarchical relationships between classes.

- **Polymorphism**: 
  - The ability to present the same interface for different underlying data types.
  - Enables a single function or method to operate in multiple ways depending on the context.

- **Dynamic Binding**: 
  - The process where the code to be executed is determined at runtime.
  - Supports flexibility and the ability to call methods on objects without knowing their exact type until execution.

- **Message Passing**: 
  - The process of communication between objects.
  - Involves sending information or requests between objects in a defined format.

## Q. Benefits of Object-Oriented Programming?

- **Improved Code Reusability**: 
  - OOP promotes reusability through inheritance and polymorphism. Once a class is defined, it can be reused to create multiple objects, reducing redundancy.

- **Enhanced Maintainability**:
  - Code is easier to maintain, modify, and debug because it is organized into classes and objects. Changes to a class affect only the objects created from that class.

- **Clear Structure**:
  - By using objects and inheritance, OOP provides a clear and modular structure for programs. This makes it easier to manage complex software systems.

- **Data Security**:
  - The principle of data hiding (encapsulation) helps build secure systems by restricting direct access to certain parts of the data and providing controlled access through methods.

- **Reduced Complexity**:
  - OOP helps manage software complexity by organizing code into manageable units. This makes it easier to develop reusable software with less code and shorter development time.

## What is a Class and Why we need it in OOP?

- **Definition of a Class**:
  - A class is a blueprint or recipe for creating objects. It defines a user-defined data type that encapsulates both data (attributes) and functions (methods) that operate on the data.
  - A class consists of variables (attributes) and functions (methods), collectively known as class members.

- **Purpose and Benefits of Classes**:
  - **Encapsulation**: Classes bundle data and functions into a single unit, making the code more organized and manageable.
  - **Reusability**: Classes allow for the creation of multiple objects with similar attributes and behaviors, promoting code reuse.
  - **Modeling Real-World Entities**: Classes help in modeling real-world entities, which makes it easier to represent complex systems and interactions.
  - **Complexity Management**: Classes help manage complexity by breaking down the problem into smaller, more manageable pieces.
  - **Inheritance and Encapsulation**: Classes support inheritance, allowing one class to inherit attributes and methods from another, and encapsulation, hiding the internal state and requiring all interactions to be performed through methods.

## Q. Why we use Class instead of Struct?

- **Access Specifiers**:
  - **Classes**: Use `public`, `private`, and `protected` access specifiers to control access to members, ensuring data security and encapsulation.
  - **Structs**: All members are `public` by default, meaning they are accessible from anywhere in the code.

- **Functionality**:
  - **Classes**: Can include member functions, constructors, destructors, and other advanced features that provide greater flexibility and control.
  - **Structs**: Primarily used for data storage with limited functionality. They do not include member functions or other advanced features by default.

- **Inheritance**:
  - **Classes**: Support inheritance, allowing a derived class to inherit properties and methods from a base class, facilitating code reuse and extension.
  - **Structs**: Do not support inheritance, limiting their use to simpler data storage tasks without the capability to extend or modify their behavior.
 
## Q. What is Object and why we need it in OOP?

An object is a component of a program that knows how to perform certain actions and how to interact with other elements of the program. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated. An object has an identity, state, and behavior. 

Objects help organize and manage data and functions together, making code simpler and more efficient. They allow us to model real-world things, reuse code, and build complex systems in a manageable way. By using objects, we make our programs easier to understand and maintain.

## Q. What are access specifiers in OOP?

Access specifiers are keywords in C++ that define the visibility and accessibility of class members (variables and functions). They control how other parts of the program can interact with the class's members. The three main access specifiers are:

- **Public**:
  - Members declared as `public` can be accessed from anywhere in the program. This means that any code can read or modify these members.
  - Example:
    ```cpp
    class Example {
    public:
        int publicVariable;
        void publicMethod() {
            // Can be accessed from anywhere
        }
    };
    ```

- **Private**:
  - Members declared as `private` can only be accessed from within the class itself. Other parts of the program, including derived classes, cannot access private members directly.
  - Example:
    ```cpp
    class Example {
    private:
        int privateVariable;
        void privateMethod() {
            // Can only be accessed within this class
        }
    };
    ```

- **Protected**:
  - Members declared as `protected` can be accessed within the class and by derived classes (subclasses). However, they are not accessible from outside these classes.
  - Example:
    ```cpp
    class Base {
    protected:
        int protectedVariable;
        void protectedMethod() {
            // Can be accessed within this class and derived classes
        }
    };

    class Derived : public Base {
        void someFunction() {
            protectedVariable = 10; // Accessible here
        }
    };
    ```

### Summary
- **Public**: Accessible from anywhere.
- **Private**: Accessible only within the class.
- **Protected**: Accessible within the class and its derived classes.

## Q. What are Class Attributes & Methods in OOP?

Class attributes and methods are integral components of a class in Object-Oriented Programming. They encapsulate data and behavior into a single entity.

### Class Attributes
Class attributes (also known as data members) are variables that belong to a class. They represent the state or properties of an object created from the class.

### Class Methods
Class methods (also known as member functions) are functions that operate on the class's attributes. They define the behavior of the class and can be accessed using objects of the class.

Defining Methods Outside the Class
- Methods can be defined directly within the class body:
- ```cpp
  class Employee {
  public:
      int eID;
      std::string eName;
  
      void printName();
  };
  
  void Employee::printName() {
      std::cout << eName << std::endl;
  }
  
  Defining inside the class:
  ```cpp
  class Employee{
    public:
      int eID;
      string eName;
  
      void printName()
      {
          cout << eName << endl;
      }
  };
  ```
  
Defining outside the class:
- Methods can also be defined outside the class declaration:
- ```cpp
  class Employee{
    public:
      int eID;
      string eName;
  
      void printName();
  };
  
  void Employee::printName()
  {
      cout << eName << endl;
  }
  ```

```
- Stroustrup initially named C++ language as C with classes because C++ language was almost the same as C language but they added a new concept of classes in it.
- Classes are the extension of structures in C language.
- Structures had limitations such as; members are public and no methods (in C).
- Classes have some additional futures than structures such as; classes that can have methods and properties.
- Classes have a feature to make class members as public and private.
- In C++ objects can be declared along with class declaration.
```

```cpp
class Employee{

} harry, rohan, lovish;
```

## Nesting of Member Functions

Nesting of member functions refers to the practice of calling one member function from within another member function of the same class. This technique helps in organizing code, reusing functionality, and improving code modularity.

Example:
```cpp
class SimpleCalculator {
public:
    // Public member function
    void addNumbers(int a, int b) {
        // Call to another member function
        int result = calculateSum(a, b); 
        cout << "The sum is: " << result << endl;
    }

private:
    // Private member function
    int calculateSum(int x, int y) {
        return x + y;
    }
};

int main() {
    SimpleCalculator calc;
    calc.addNumbers(5, 7); // Output: The sum is: 12
}
```

## Q.  How is memory allocated for variables and functions in a C++ class, and how does this differ for objects of the class?

In C++, memory allocation for variables and functions in a class operates differently for each type. Understanding this can help in optimizing memory usage and performance in your programs.

### Memory Allocation for Variables

When an object of a class is instantiated, memory is allocated for the class's member variables. Each object has its own copy of these member variables, which allows each object to maintain its own distinct state.

Example:
```cpp
class MyClass {
public:
    int var1; // Member variable
    double var2; // Member variable
};
```

### Memory Allocation for Functions

Class member functions are different. They are allocated memory only once when the class is defined. This means that all instances (objects) of the class share the same copy of these functions. This shared memory for functions helps to reduce memory usage and ensures that functions are not duplicated for each object.

Example:
```cpp
class MyClass {
public:
    void display() { // Member function
        // Function body
    }
};
```

## Q. What are static data members in C++ and how are they used?

In C++, static data members are variables that belong to the class itself rather than to any particular object of the class. They are shared across all instances of the class, meaning there is only one copy of the static data member, regardless of how many objects of the class are created.

- **Shared Across Objects**: A static data member is common to all objects of the class. Changes to the static member in one object affect all other objects of the same class.
- **Definition and Declaration**: Static members are declared inside the class but must be defined outside the class using the scope resolution operator (`::`). This is necessary to allocate memory for the static member.

Example
```cpp
class Employee {
public:
    static int count; // Static variable
    string eName;

    void setName(string name) {
        eName = name;
        count++; // Increment count for every name set
    }

    static int getCount() { // Static method
        return count; // Return the static count
    }
};

// Define and initialize the static variable
int Employee::count = 0;

int main() {
    Employee Harry;
    Harry.setName("Harry");

    // Access static member using the class name
    cout << "Number of employees: " << Employee::getCount() << endl;
}
```

## Q. How can you use arrays of objects and pass objects as function arguments in C++? Provide examples.

1. Arrays of Objects:
An array of objects is a collection of objects of a class. Just like arrays of basic data types, arrays of objects are declared and accessed using similar syntax. Each element of the array is an object of the class, and you can use array indexing to access and manipulate individual objects.
```cpp
class Employee {
    int id;
    int salary;

public:
    void setId() {
        salary = 122;
        cout << "Enter the id of employee: ";
        cin >> id;
    }

    void getId() const {
        cout << "The id of this employee is " << id << endl;
    }
};

int main() {
    Employee employees[4]; // Array of 4 Employee objects

    for (int i = 0; i < 4; i++) {
        employees[i].setId(); // Set ID for each employee
        employees[i].getId(); // Display ID for each employee
    }
}
```

2. Passing Objects as Function Arguments:
Objects can be passed to functions either by value or by reference. Passing objects by value creates a copy of the object, while passing by reference avoids copying and allows the function to modify the original object.
```cpp
class Complex {
    int a;
    int b;

public:
    void setData(int v1, int v2) {
        a = v1;
        b = v2;
    }

    void setDataBySum(const Complex &o1, const Complex &o2) {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber() const {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;

    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
}
```

Summary: Arrays of objects allow you to manage multiple objects of the same class easily, while passing objects as function arguments provides a way to use and manipulate objects within functions, making your code more modular and organized.

## Q. What are friend functions and friend classes in C++? How are they used?

### Friend Functions

Friend functions are special functions that are granted access to the private and protected members of a class, even though they are not members of that class. They are declared inside the class but defined outside of it.

**Properties**:
- **Not a Member**: Friend functions are not members of the class. They do not have direct access to the class's members; they require an object of the class to access these members.
- **Scope**: They can be declared in any section of the class (public, private, or protected), but this does not affect their access rights.

Example:
```cpp
class Box {
private:
    int length;

public:
    Box() : length(0) {}
    void setLength(int l) { length = l; }
    friend void printLength(const Box& b); // Friend function declaration
};

// Friend function definition
void printLength(const Box& b) {
    cout << "Length of the box is: " << b.length << endl;
}

int main() {
    Box b;
    b.setLength(10);
    printLength(b); // Calls the friend function
}
```

### Friend Classes
Friend classes are classes that are granted access to the private and protected members of another class. If class A is a friend of class B, then A can access all private and protected members of B.

Example:
```cpp
class ClassB; // Forward declaration

class ClassA {
public:
    void showClassBDetails(const ClassB& b); // Member function accessing ClassB's private members
};

class ClassB {
private:
    int secret;

public:
    ClassB() : secret(42) {}
    friend class ClassA; // Granting ClassA access
};

void ClassA::showClassBDetails(const ClassB& b) {
    cout << "ClassB's secret is: " << b.secret << endl;
}

int main() {
    ClassB b;
    ClassA a;
    a.showClassBDetails(b); // Calls the friend function of ClassA
}
```

### Summary:
- **Friend Functions:** Allow specific functions to access the private data of a class without being members of that class. This is useful for functions that need to operate on the class but do not logically belong as a member function.
- **Friend Classes:** Grant an entire class access to the private and protected members of another class, enabling closer integration between classes.

## Q. What is constructor and what are different types of constructor in C++?

A constructor is a special method in a class that is automatically called whenever an object of that class is created. It has the same name as the class and does not have a return type. Constructors are used to initialize objects of their class. They should always be public to be accessible when creating objects.

### Types of Constructors

1. **Default Constructor**
   - A default constructor is automatically provided by the compiler if no constructors are explicitly defined in the class. It initializes objects with default values.
   - Example:
     ```cpp
     class Person {
     public:
         Person() { // Default constructor
             age = 0;
         }
         int age;
     };
     ```

2. **Non-Parameterized Constructor**
   - This type of constructor does not take any arguments and is explicitly defined by the programmer. It is similar to the default constructor but is explicitly defined.
   - Example:
     ```cpp
     class Person {
     public:
         Person() { // Non-parameterized constructor
             age = 0;
         }
         int age;
     };
     ```

3. **Parameterized Constructor**
   - A parameterized constructor takes arguments to initialize an object with specific values. It allows setting different initial values for different objects.
   - Example:
     ```cpp
     class Person {
     public:
         Person(int a) { // Parameterized constructor
             age = a;
         }
         int age;
     };

     Person p1(25); // Creates a Person object with age 25
     ```

4. **Copy Constructor**
   - A copy constructor is used to create a new object as a copy of an existing object. It is useful when passing objects by value or returning objects from functions.
   - Example:
     ```cpp
     class Person {
     public:
         Person(const Person &p) { // Copy constructor
             age = p.age;
         }
         int age;
     };

     Person p1(30); // Original object
     Person p2 = p1; // Copy constructor is called here
     ```

### Summary
- **Default Constructor**: Initializes objects with default values when no arguments are provided.
- **Non-Parameterized Constructor**: A constructor with no arguments, explicitly defined by the programmer.
- **Parameterized Constructor**: Initializes objects with specific values provided as arguments.
- **Copy Constructor**: Creates a new object as a copy of an existing object, useful for copying objects.

## Q. What is Constructor Overloading in C++?

Constructor overloading is a concept in which one class can have multiple constructors with different parameters. The main thing to note here is that the constructors will run according to the arguments. If a program consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument.

Example:
```cpp
class Complex
{
    int a, b;

public:
    Complex(){
        a = 0;
        b =0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
}
```

## Q. What does it mean by Constructors with Default Arguments in C++?

Default arguments of the constructor are those which are provided in the constructor declaration. If the values are not provided when calling the constructor the constructor uses the default arguments automatically.

Example:
```cpp
class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}

int main(){
    Simple s(12, 13);
    s.printData();
}
```

## Q. What does it mean by Dynamic Initialization of Objects Using Constructors?

The dynamic initialization of the object means that the object is initialized at the runtime.  Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.

Example:
```cpp
class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p, int y, float r); // r can be a value like 0.04
        BankDeposit(int p, int y, int r); // r can be a value like 14
        void show();
};
```

## Q. What is the concept of copy constructor in C++?

A copy constructor is a type of constructor that creates a copy of another object. If we want one object to resemble another object we can use a copy constructor.

Example:
```cpp
class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};
```

## Q. What does it mean by constructor delegation?

Constructor delegation is a feature in C++ that allows one constructor to call another constructor within the same class. This is useful for avoiding redundant code and ensuring that initialization logic is consistent and maintainable.

Example:
```
class Rectangle {
    int length;
    int width;

public:
    // Primary constructor
    Rectangle(int l, int w) : length(l), width(w) {
        cout << "Primary constructor called" << endl;
    }

    // Delegating constructor
    Rectangle(int side) : Rectangle(side, side) {
        cout << "Delegating constructor called" << endl;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Rectangle rect1(10, 20); // Calls primary constructor
    rect1.display();

    Rectangle square(5); // Calls delegating constructor
    square.display();
}
```

## Q. What is Destructor in C++?

A destructor is a special member function in a C++ class that is automatically called when an object goes out of scope or is explicitly deleted. Its main purpose is to perform cleanup tasks, such as deallocating memory and releasing resources that the object might have acquired during its lifetime.

### Key Features
- **Naming Convention**: The destructor has the same name as the class but is prefixed with a tilde (`~`). If the class is named `MyClass`, the destructor is named `~MyClass`.
- **No Parameters**: Destructors do not take any arguments and do not return a value.
- **Automatic Invocation**: The destructor is called automatically by the compiler when an object is destroyed. This happens when the object goes out of scope or is explicitly deleted using the `delete` operator.
- **Reverse Order Execution**: Destructors execute in the reverse order of their construction. This means if multiple objects are created and destroyed, the last object created will be the first one to be destroyed.

### Example:
```cpp
class ResourceHandler {
    int* data; // Pointer to dynamically allocated memory

public:
    // Constructor
    ResourceHandler(int value) {
        data = new int(value); // Allocate memory
        cout << "ResourceHandler constructed with value: " << *data << endl;
    }

    // Destructor
    ~ResourceHandler() {
        delete data; // Deallocate memory
        cout << "ResourceHandler destroyed and memory deallocated" << endl;
    }
};

int main() {
    ResourceHandler handler(10); // Constructor is called here
    // Destructor will be called automatically when handler goes out of scope
}
```

## Q. What is inheritance? Explain its different types.

The concept of reusability in C++ is supported using inheritance. We can reuse the properties of an existing class by inheriting it and deriving its properties. The existing class is called the base class and the new class which is inherited from the base class is called the derived class.

```cpp
// Derived Class syntax
class derived_class_name : access_modifier base_class_name
{
    // body of the derived class
}
```

### Single Inheritance
Single inheritance is a type of inheritance in which a derived class inherits from only one base class. 

**Example:**
- We have two classes, `Employee` and `Programmer`. If the `Programmer` class is inherited from the `Employee` class, the `Programmer` class can implement the functionalities of the `Employee` class.

```cpp
class ClassA {
    // body of ClassA
};

// derived from ClassA
class ClassB : public ClassA {
    // body of ClassB
};
```
    
### Multiple Inheritance
- Multiple inheritance is a type of inheritance in which one derived class is inherited from more than one base class.
- For example, we have three classes “Employee”, “Assistant”, and “Programmer”. If the “Programmer” class is inherited from the “Employee” and “Assistant” classes, it means that the “Programmer” class can now implement the functionalities of both the “Employee” and “Assistant” classes.
- For example, we have three classes `ClassA`, `ClassB`, and `ClassC`. If `ClassC` is inherited from both `ClassA` and `ClassB`, it means that `ClassC` can now implement the functionalities of both `ClassA` and `ClassB`. This is multiple inheritance.

```cpp
class ClassA {
    // body of ClassA
};

class ClassB {
    // body of ClassB
};

// derived from ClassA and ClassB
class ClassC : public ClassA, public ClassB {
    // body of ClassC
};
```

### Multilevel Inheritance
- Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class.
- Example: We have three classes “Animal”, “Mammal”, and “Cow”. If the “Mammal” class is inherited from the “Animal” class and the “Cow” class is inherited from the “Mammal” class, it means that the “Mammal” class can now implement the functionalities of “Animal” and the “Cow” class can now implement the functionalities of the “Mammal” class.
- Example: We have three classes “Grandfather”, “Father”, and “Child”. If the “Father” class is inherited from the “Grandfather” class and the “Child” class is inherited from the “Father” class, it means that the “Father” class can now implement the functionalities of the “Grandfather” and the “Child” class can now implement the functionalities of the “Father” class.

**Example 1:**
```cpp
#include <iostream>
using namespace std;

class Student {
protected:
    int roll_number;

public:
    void set_roll_number(int r) {
        roll_number = r;
    }
    void get_roll_number(void) {
        cout << "The roll number is " << roll_number << endl;
    }
};

class Exam : public Student {
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }
    void get_marks(void) {
        cout << "The marks obtained in maths are: " << maths << endl;
        cout << "The marks obtained in physics are: " << physics << endl;
    }
};

class Result : public Exam {
private:
    float percentage;

public:
    void display_results() {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main() {
    Result A;
    A.set_roll_number(420);
    A.set_marks(94.0, 90.0);
    A.display_results();
}
```

Example: We have three classes ClassA, ClassB, and ClassC. If ClassB is inherited from ClassA and ClassC is inherited from ClassB, it means that ClassB can now implement the functionalities of ClassA and ClassC can now implement the functionalities of ClassB. This is multilevel inheritance.

**Example 2:**
```cpp
class ClassA {
    // body of ClassA
};

// derived from ClassA
class ClassB : public ClassA {
    // body of ClassB
};

// derived from ClassB
class ClassC : public ClassB {
    // body of ClassC
};
```
    
### Hierarchical Inheritance
- Hierarchical inheritance is a type of inheritance in which several derived classes are inherited from a single base class.
- For example, we have three classes “Employee”, “Manager”, and “Programmer”. If the “Programmer” and “Manager” classes are inherited from the “Employee” class, it means that the “Programmer” and “Manager” classes can now implement the functionalities of the “Employee” class.
- For example, we have three classes `ClassA`, `ClassB`, and `ClassC`. If `ClassB` and `ClassC` are inherited from `ClassA`, it means that `ClassB` and `ClassC` can now implement the functionalities of `ClassA`. This is hierarchical inheritance.

**Example:**
```cpp
class ClassA {
    // body of ClassA
};

// derived from ClassA
class ClassB : public ClassA {
    // body of ClassB
};

// derived from ClassA
class ClassC : public ClassA {
    // body of ClassC
};
```

### Hybrid Inheritance
- Hybrid inheritance is a combination of different types of inheritances.
- For example, we have four classes “Animal”, “Mammal”, “Bird”, and “Bat”. If the “Mammal” and “Bird” classes are inherited from the “Animal” class and the “Bat” class is inherited from both “Mammal” and “Bird” classes, it means that the “Mammal” and “Bird” classes can now implement the functionalities of the “Animal” class, and the “Bat” class can now implement the functionalities of both the “Mammal” and “Bird” classes.
- For example, we have four classes `ClassA`, `ClassB`, `ClassC`, and `ClassD`. If `ClassC` is inherited from both `ClassA` and `ClassB`, and `ClassD` is inherited from `ClassC`, it means that `ClassC` can now implement the functionalities of both `ClassA` and `ClassB`, and `ClassD` can now implement the functionalities of `ClassC`. This is multilevel inheritance where both multilevel and multiple inheritances are present.

**Example:**
```cpp
class ClassA {
    // body of ClassA
};

class ClassB {
    // body of ClassB
};

// derived from ClassA and ClassB
class ClassC : public ClassA, public ClassB {
    // body of ClassC
};

// derived from ClassC
class ClassD : public ClassC {
    // body of ClassD
};
```


## Q. What are Access Modifiers in Inheritance

**Public Access Modifier in C++**
- All the variables and functions declared under the public access modifier will be available for everyone. They can be accessed both inside and outside the class. The dot (.) operator is used in the program to access public data members directly.

**Private Access Modifier in C++**
- All the variables and functions declared under a private access modifier can only be used inside the class. They are not permissible to be used by any object or function outside the class.

**Protected Access Modifiers in C++**
- Protected access modifiers are similar to the private access modifiers, but protected access modifiers can be accessed in the derived class whereas private access modifiers cannot be accessed in the derived class.

![image](https://github.com/user-attachments/assets/78a0f02b-170b-4277-86ff-a1afe8ecc430)


### Q. What is Ambiguity in inheritance? Explain how to resolve it.

Ambiguity in inheritance can be defined as when one class is derived from two or more base classes, there are chances that the base classes have functions with the same name. This can confuse the derived class when choosing between similarly named functions. To solve this ambiguity, the scope resolution operator `::` is used.

- If ambiguity occurs in the derived class, we resolve it using the scope resolution operator.
- If there is a function with the same name in the derived class and base class, then the derived class function will be called, and ambiguity will be resolved automatically. If there is no function in the derived class, then the base class function should be called.

**Example 1:**
```cpp
#include <iostream>
using namespace std;

class Base1 {
public:
    void greet() {
        cout << "How are you?" << endl;
    }
};

class Base2 {
public:
    void greet() {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void greet() {
        Base2::greet(); // Resolving ambiguity
    }
};

int main() {
    // Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d;
    d.greet();
}```

**Example 2:**

```cpp
#include <iostream>
using namespace std;

class B {
public:
    void say() {
        cout << "Hello world" << endl;
    }
};

class D : public B {
public:
    // D's new say() method will override base class's say() method
    void say() {
        cout << "Hello my beautiful people" << endl;
    }
};

int main() {
    // Ambiguity 2
    B b;
    b.say();

    D d;
    d.say();
}
```

## Q. What is a virtual base class in inheritance and what problem does it solve?

A **virtual base class** is a concept used in multiple inheritance to prevent ambiguity between multiple instances of a base class. This situation arises when a derived class inherits from multiple base classes that share a common ancestor.

### Problem Explanation

- **Class Structure**:
  - Class `A` is a parent class of classes `B` and `C`.
  - Classes `B` and `C` are both parents of class `D`.

- **Inheritance Ambiguity**:
  - When class `D` tries to access members of class `A`, it inherits them twice (once through `B` and once through `C`).
  - This leads to ambiguity, causing the compiler to throw an error when trying to access members of class `A`.

### Solution: Virtual Base Class

- To solve this ambiguity, we declare class `A` as a **virtual base class** using the `virtual` keyword.
- With this declaration, only one copy of the data members and member functions of class `A` is shared among classes `B` and `C`.

### Example Code

```cpp
#include<iostream>
using namespace std;

class A { 
public: 
    void say() { 
        cout << "Hello world" << endl; 
    } 
}; 

class B : public virtual A { 
};   

class C : public virtual A { 
};   

class D : public B, public C { 
};  

int main() {
    D abc;
    abc.say();
}
```

## Example

- **Class Structure**:
  - Class `Student` is a parent class of classes `Test` and `Sports`.
  - Both `Test` and `Sports` are parent classes of class `Result`.

## Ambiguity in Inheritance

- The data members and member functions of class `Student` will be inherited twice in class `Result`.
- This is because both `Test` and `Sports` derive from `Student`.
- When class `Result` tries to access members of class `Student`, it causes ambiguity for the compiler, resulting in an error.

## Solution: Virtual Base Class

- To resolve this ambiguity, we declare class `Student` as a **virtual base class** using the `virtual` keyword.
- By making `Student` a virtual base class, only one copy of its data members and member functions is passed to the inheriting classes (`Test` and `Sports`).

## Class Implementations

### Student Class

- The `Student` class consists of:
  - Protected data member: `roll_no`
  - Member functions:
    - `set_number(int a)`: Assigns value to `roll_no`.
    - `print_number()`: Prints the value of `roll_no`.

### Test Class

- The `Test` class inherits from the virtual base class `Student`.
- It consists of:
  - Protected data members: `maths`, `physics`
  - Member functions:
    - `set_marks(float m1, float m2)`: Assigns values to `maths` and `physics`.
    - `print_marks()`: Prints the values of `maths` and `physics`.

### Sports Class

- The `Sports` class also inherits from the virtual base class `Student`.
- It consists of:
  - Protected data member: `score`
  - Member functions:
    - `set_score(float sc)`: Assigns value to `score`.
    - `print_score()`: Prints the value of `score`.

### Result Class

- The `Result` class inherits from both `Test` and `Sports`.
- It consists of:
  - Protected data member: `total`
  - Member function:
    - `display()`: 
      - Calculates the total score by adding `maths`, `physics`, and `score`.
      - Calls `print_number()`, `print_marks()`, and `print_score()` to display results.

## Example Code

```cpp
#include<iostream>
using namespace std;

class Student {
protected:
    int roll_no;
public:
    void set_number(int a) {
        roll_no = a;
    }
    void print_number(void) {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : public virtual Student {
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }
    void print_marks(void) {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : public virtual Student {
protected:
    float score;
public:
    void set_score(float sc) {
        score = sc;
    }
    void print_score(void) {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports {
private:
    float total;
public:
    void display(void) {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main() {
    Result a;
    a.set_number(4200);
    a.set_marks(78.9, 99.5);
    a.set_score(9);
    a.display();
}
```

## Q. What is the concept of Constructor in Derived Class, Multiple Inheritance, and Virtual Base Class?

### **Constructors in Derived Class**
- Constructors can be used in derived classes in C++.
- **No-Argument Constructor in Base Class**:  
  If the base class constructor does not require arguments, the derived class does not need to define a constructor.
- **With Arguments in Base Class**:  
  If the base class constructor requires arguments, the derived class must pass arguments to the base class constructor.
- If both base and derived classes have constructors, the base class constructor is executed **first**.


### **Constructors in Multiple Inheritance**
- In multiple inheritance, **base class constructors** are executed in the order they are declared in the derived class definition.
  - Example:
    - If a derived class `C` inherits from `A` and `B`, and `A` is listed before `B`, then the constructor of `A` will execute first.
    - If `B` is listed before `A`, then the constructor of `B` will execute first.
- In **multilevel inheritance**, constructors are executed in the order of inheritance.  
  For example:
  - Class `A` → Class `B` → Class `C`.
  - Constructor order: `A` → `B` → `C`.

### **Special Syntax for Passing Arguments**
C++ allows a special syntax to pass arguments to multiple base classes in inheritance.  

**Syntax**:
```cpp
DerivedConstructor(arg1, arg2, arg3...): Base1Constructor(arg1, arg2), Base2Constructor(arg3, arg4) {
    // Derived class body
}
```

```cpp
class Base1 {
public:
    Base1(int x) { cout << "Base1 Constructor: " << x << endl; }
};

class Base2 {
public:
    Base2(int y) { cout << "Base2 Constructor: " << y << endl; }
};

class Derived : public Base1, public Base2 {
public:
    Derived(int x, int y, int z) : Base1(x), Base2(y) {
        cout << "Derived Constructor: " << z << endl;
    }
};
```

## Special Case: Virtual Base Class

- **Virtual base class constructors** are invoked **before non-virtual base classes**.
- If there are multiple virtual base classes, they are executed in the **order they are declared**.
- After all virtual base class constructors are executed:
  - Non-virtual base class constructors are called.
  - Finally, the derived class constructor is executed.

## Q. What Does Initialization List in Constructors Mean and Why Do We Use It?

An **initialization list** is used to initialize class data members **before** the constructor body is executed. This is particularly useful for:
1. Initializing `const` members.
2. Initializing reference members.
3. Calling base class constructors in inheritance.

### **Syntax**:
```cpp
Constructor(argument-list) : initialization-list {
    // Other constructor logic
}```

```cpp
class Test {
    int a, b;

public:
    Test(int i, int j) : a(i), b(j) {
        cout << "Constructor executed." << endl;
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
```

## Q. What is the `new` keyword/operator in C++ and what is its purpose and benefits?

The `new` keyword in C++ is used for dynamically allocating memory on the heap. It allows the programmer to allocate memory for variables at runtime, which is particularly useful when the size of the data is not known at compile time or when you need to manage memory explicitly.

- **Purpose**: The `new` keyword allocates memory on the heap during runtime. This is in contrast to allocating memory on the stack, where the memory allocation is determined at compile time.
- **Benefits**:
  - **Dynamic Memory Allocation**: It enables dynamic memory allocation, allowing programs to manage memory flexibly based on runtime conditions.
  - **Object Creation**: Used for creating objects of user-defined types dynamically.
  - **Array Allocation**: Can allocate memory for arrays of objects of any type.

## Q. What is the `delete` keyword/operator in C++ and what is its purpose and benefits?

The `delete` keyword in C++ is used to free dynamically allocated memory that was allocated using the `new` keyword. It ensures that memory allocated on the heap is properly released and made available for reuse.


- **Purpose**: To release dynamically allocated memory back to the operating system heap.
- **Benefits**:
  - **Prevents Memory Leaks**: Ensures that memory allocated using `new` is properly deallocated to prevent memory leaks.
  - **Correct Memory Management**: Helps in managing memory efficiently, especially when dealing with large objects or arrays.
  - **Garbage Collection**: Frees up memory for reuse, allowing the program to efficiently utilize memory resources.


```cpp
int *arr = new int[3];  // Dynamically allocate an array of 3 integers

arr[0] = 10;
*(arr + 1) = 20;
arr[2] = 30;

delete[] arr;  // Free the allocated memory

// After deleting, accessing arr elements will result in undefined behavior
cout << "The value of arr[0] is " << arr[0] << endl;
cout << "The value of arr[1] is " << arr[1] << endl;
cout << "The value of arr[2] is " << arr[2] << endl;
```

## Q. What does it mean by Pointer to objects in C++ and what is its purpose and benefit?

In C++, pointers are used not only to store addresses of primitive data types (like int, float, double) but also to store addresses of objects of user-defined classes. This allows for dynamic memory allocation and manipulation of objects during runtime.

- **Pointer to Objects**: A pointer to an object in C++ holds the memory address of an object of a class type rather than a primitive type.
- **Purpose**: 
  - **Dynamic Object Creation**: Allows for dynamic creation of objects during runtime using the `new` keyword.
  - **Indirect Access**: Provides a way to indirectly access and manipulate objects, particularly useful when objects need to be created or accessed conditionally.
  - **Efficient Memory Management**: Facilitates efficient memory usage and management, especially when dealing with large or dynamically changing sets of objects.

```cpp
class Complex {
    int real, imaginary;

public:
    void getData() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b) {
        real = a;
        imaginary = b;
    }
};

int main() {
    Complex *ptr = new Complex;  // Create a Complex object dynamically using a pointer

    ptr->setData(1, 54);  // Accessing member functions through pointer using -> operator
    ptr->getData(); 

    delete ptr;  // Free the memory allocated for the Complex object
}
```

## Q. What is the arrow `->` operator and `.` operator in C++, and what is their purpose and benefits with classes and objects?

In C++, the `->` and `.` operators are used to access members (variables or functions) of objects and pointers to objects. They provide a way to interact with class members directly and through pointers.

- **`.` Operator**: The dot (`.`) operator is used to access members of an object directly.
  - **Purpose**: It allows direct access to members of an object when the object itself is known and not accessed through a pointer.
  - **Benefits**: Provides straightforward syntax for accessing members of objects, enhancing code readability and clarity.

- **`->` Operator**: The arrow (`->`) operator is used to access members of an object through a pointer to that object.
  - **Purpose**: It allows access to members of an object when working with pointers to objects.
  - **Benefits**: Enables dynamic allocation of objects and flexible manipulation of object members using pointers, especially useful for dynamic memory management and polymorphism.

```cpp
class Complex {
    int real, imaginary;

public:
    void getData() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b) {
        real = a;
        imaginary = b;
    }
};

int main() {
    Complex obj;

    obj.setData(1, 54);  // Accessing members using the . operator
    obj.getData(); 

    Complex *ptr = new Complex;
    ptr->setData(5, 10);  // Accessing members using the -> operator with a pointer
    ptr->getData(); 

    delete ptr;
}
```

## Q. What does it mean by Array of Objects in C++?

An array of objects in C++ refers to an array where each element is an instance of a class. This allows for multiple objects of the same class type to be stored in a sequential manner within a single array structure.

### Explanation:
- **Array of Objects**: In C++, an array of objects is declared and used like any other array, but each element within the array is an object of a specified class type.
- **Purpose**: 
  - **Storage and Organization**: Enables the storage and organization of multiple instances of a class in a structured format, facilitating easy access and manipulation.
  - **Efficient Access**: Provides efficient access to individual objects through array indexing, allowing operations to be performed on each object systematically.
- **Example**:
```cpp
#include <iostream>
using namespace std;

class ShopItem {
    int id;
    float price;

public:
    void setData(int a, float b) {
        id = a;
        price = b;
    }

    void getData() {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main() {
    int size = 3;
    ShopItem *ptr = new ShopItem[size];  // Creating an array of ShopItem objects dynamically

    ShopItem *ptrTemp = ptr;  // Temporary pointer for iteration

    int p;
    float q;

    for (int i = 0; i < size; i++) {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;

        ptr->setData(p, q);  // Setting data for each ShopItem object in the array
        ptr++;  // Moving pointer to the next element in the array
    }

    for (int i = 0; i < size; i++) {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();  // Getting data for each ShopItem object in the array
        ptrTemp++;  // Moving temporary pointer to the next element in the array
    }

    delete[] ptr;  // Freeing dynamically allocated memory for the array
}
```


## Q. What is the 'this' keyword/pointer in C++, and what is its purpose?

In C++, `this` is a keyword that represents a pointer to the current instance of a class. It is implicitly passed as a hidden argument to all non-static member function calls to point to the object for which the member function is called.

- **Purpose**: 
  - **Identifying Object Context**: `this` pointer helps distinguish between local variables and instance variables when they have the same name.
  - **Accessing Object's Members**: It enables accessing the member variables and methods of the current object within its own scope.
  - **Returning References**: `this` pointer can be used to return a reference to the current object, enabling method chaining and fluent interfaces.

### Examples:
```cpp
#include <iostream>
using namespace std;

class A {
    int a;

public:
    void setData(int a) {
        this->a = a;  // Using 'this' to access member variable 'a'
    }

    void getData() {
        cout << "The value of a is " << a << endl;
    }
};

int main() {
    A obj;
    obj.setData(5);

}
```

# -----------------------------------------------------------------------------------------------------------------------------------------------------
# Standard Template Library (STL)

### Main Components
- Algorithms
- Containers
- Functions
- Iterators

----

## Pairs

- **Purpose**: Store two related values together.
- **Nested Pairs**: Use nested pairs to store more than two values.

### Basic Pair Example
```cpp
pair<int, int> A = {1, 3};
cout << A.first << " " << A.second << endl; // Output: 1 3
```

### Nested Pair Example
```cpp
pair<int, pair<int, int>> B = {1, {1, 3}};
cout << B.first << " " << B.second.first << " " << B.second.second << endl; // Output: 1 1 3
```

### Pair Array Example
```cpp
pair<int, int> Arr[] = {{1, 2}, {3, 4}, {5, 6}};
cout << Arr[0].first << " " << Arr[0].second << endl; // Output: 1 2
```

----

## Vectors

- **Purpose**: Vectors allow you to store elements similarly to arrays but with dynamic sizing.
- **Iterator**: Points to the memory location where elements are stored.

### Basic Operations
```cpp
// Create an empty vector
vector<int> A;

// Add elements to the vector
A.push_back(1);      // Adds 1 to the end
A.emplace_back(2);   // Faster than push_back

// Create a vector of pairs
vector<pair<int, int>> B;
B.push_back({1, 2});       // Adds a pair (1, 2)
B.emplace_back(1, 2);      // No need for curly braces

// Create a vector with 5 elements, each initialized to 100
vector<int> C(5, 100);

// Create a vector with 5 default-initialized elements (garbage or 0)
vector<int> D(5);
D.emplace_back(1);  // Vector automatically resizes if needed
D.emplace_back(6);  // Example of appending more elements

// Create a vector with 5 elements, each initialized to 1
vector<int> E(5, 1);
```

### Accessing Elements
```cpp
// Print elements
cout << E[0] << " " << E[1] << " " << E[2] << " " << E[3] << " " << E[4] << endl;

// Copy vector D into F
vector<int> F(D);
```

### Using Iterators
```cpp
// Initialize an iterator to the beginning of vector F
vector<int>::iterator it = F.begin();
it++;
cout << *(it) << " ";  // Output: 2nd element

it = it + 2;
cout << *(it) << " ";  // Output: 4th element

// Reverse iterator example
vector<int>::reverse_iterator itb = F.rbegin();
cout << *itb << endl;  // Output: Last element
```

### Traversing the Vector
```cpp
// Using a normal iterator
for(vector<int>::iterator it = F.begin(); it != F.end(); it++)
    cout << *(it) << " ";

// Using an auto iterator
for(auto it = F.begin(); it != F.end(); it++)
    cout << *it << " ";

// Using a range-based loop
for(auto it : F)
    cout << it << " ";
```

### Modifying the Vector
```cpp
// Erase elements
F.erase(F.begin());                 // Remove the first element
F.erase(F.begin() + 1, F.begin() + 3); // Remove a range of elements

// Insert elements
vector<int> v(2, 100);
v.insert(v.begin(), 300);           // Insert 300 at the beginning
v.insert(v.begin() + 1, 2, 10);     // Insert two 10s at the second position

// Insert elements from another vector
vector<int> copy(2, 50);
v.insert(v.begin(), copy.begin(), copy.end());  // Insert copy at the beginning

// Remove the last element
v.pop_back();

// Swap two vectors
v1.swap(v2);

// Clear the vector
v1.clear();

// Check if the vector is empty
v1.empty();
```

----

## List

- **Purpose**: `list` is a doubly linked list that allows easy insertion and deletion of elements from both ends.

### Basic Operations
```cpp
list<int> ls;

// Adding elements to the back
ls.push_back(1);
ls.push_back(2);
ls.emplace_back(3);  // Faster than push_back

// Adding elements to the front
ls.push_front(0);
ls.push_front(-1);
ls.emplace_front(-2);  // Faster than push_front

// Iterating and printing the list
for(auto l : ls)
    cout << l << " ";  // Output: -2 -1 0 1 2 3
```

- begin, end, rbegin, rend, clear, insert, size, swap: functions are same as vector

----
    
## Deque

- **Purpose**: `deque` (Double-Ended Queue) allows fast insertion and deletion of elements from both the front and back.

### Basic Operations
```cpp
deque<int> dq;

// Adding elements to the back
dq.push_back(1);
dq.emplace_back(2);  // Faster than push_back

// Adding elements to the front
dq.push_front(3);
dq.emplace_front(4);  // Faster than push_front

// Iterating and printing the deque
for(auto it : dq)
    cout << it << " ";  // Output: 4 3 1 2
cout << endl;

// Removing elements from the front and back
dq.pop_back();    // Removes 2
dq.pop_front();   // Removes 4

// Printing the deque after pop operations
for(auto it : dq)
    cout << it << " ";  // Output: 3 1
cout << endl;

// Accessing the first and last elements
cout << dq.front() << " " << dq.back();  // Output: 3 1
```

- begin, end, rbegin, rend, clear, insert, size, swap: functions are same as vectors.
  
---- 

## Stack (LIFO)

- **Purpose**: `stack` is a Last-In-First-Out (LIFO) data structure, meaning the last element added is the first one removed.

### Basic Operations
```cpp
stack<int> s;

// Pushing elements onto the stack
s.push(1);
s.push(2);
s.push(3);
s.emplace(4);  // Faster than push

// Displaying size and top element of the stack
cout << "Size: " << s.size() << endl;        // Output: 4
cout << "Stack Top: " << s.top() << endl;    // Output: 4

// Popping elements from the stack
s.pop();  // Removes 4
s.pop();  // Removes 3

// Displaying top element and checking if the stack is empty
cout << "Stack Top: " << s.top() << endl;    // Output: 2
cout << "Stack Empty: " << s.empty() << endl; // Output: 0 (false)

// Swapping contents with another stack
stack<int> s2;
s2.swap(s);

// Displaying top element of the second stack
cout << "Stack 2 Top: " << s2.top() << endl; // Output: 2
```

- Other functions like empty, size, and swap are commonly used and work similarly to other STL containers.

----

## Queue (FIFO)

- **Purpose**: `queue` is a First-In-First-Out (FIFO) data structure, meaning the first element added is the first one removed.

### Basic Operations
```cpp
queue<int> q;

// Pushing elements onto the queue
q.push(1);
q.push(2);
q.emplace(3);  // Faster than push

// Displaying the front and back elements
cout << "Queue Front: " << q.front() << endl;  // Output: 1
cout << "Queue Back: " << q.back() << endl;    // Output: 3

// Modifying the back element
cout << "Queue Back: " << (q.back() += 5) << endl;  // Changes 3 to 8, Output: 8

// Removing the front element
q.pop();  // Removes 1

// Displaying the front and back elements after pop
cout << "Queue Front: " << q.front() << ", Queue Back: " << q.back() << endl;  // Output: Front: 2, Back: 8
```

- Functions like size, empty, and swap work similarly to how they are used in stack.

----

## Priority Queue

- **Purpose**: `priority_queue` is a data structure where the element with the highest priority (greater value by default) is always at the top.

### Maximum Heap (Default Behavior)
- Elements with greater values are at the top.
```cpp
priority_queue<int> pq;

// Pushing elements onto the priority queue
pq.push(7);
pq.push(2);
pq.push(5);
pq.emplace(4);  // Faster than push

// Displaying the top element
cout << "Priority queue top: " << pq.top() << endl;  // Output: 7

// Removing the top element
pq.pop();

// Displaying the new top element
cout << "Priority queue top: " << pq.top() << endl;  // Output: 5
```

### Minimum Heap
- Elements with smaller values are at the top.
```cpp
priority_queue<int, vector<int>, greater<int>> pmq;  // Min-heap using `greater<int>`

// Pushing elements onto the priority queue
pmq.push(5);
pmq.push(2);
pmq.push(4);
pmq.emplace(1);  // Faster than push

// Displaying the top element
cout << "Priority queue top: " << pmq.top() << endl;  // Output: 1

// Removing the top element
pmq.pop();

// Displaying the new top element
cout << "Priority queue top: " << pmq.top() << endl;  // Output: 2
```

- Functions like size, swap, and empty work similarly to other STL containers.

----

## Set

- **Purpose**: `set` stores unique elements in a sorted order. It provides fast lookup and modification operations.

### Basic Operations
```cpp
set<int> s;

// Inserting elements
s.insert(1);
s.insert(4);
s.emplace(3);  // Faster than insert
s.insert(1);   // Duplicate, will be ignored
s.emplace(2);

// Displaying elements
for(auto it : s)
    cout << it << " ";  // Output: 1 2 3 4
cout << endl;

// Finding and erasing elements
auto it = s.find(2);
cout << *it << endl;  // Output: 2

s.erase(2);  // Removes 2

it = s.find(2);
if (it == s.end()) cout << "Element not found" << endl;  // Output: Element not found

// Counting occurrences of an element
int cnt = s.count(1);  // Output: 1 (since 1 is present)
cout << cnt << endl;

// Erasing a range of elements
auto it1 = s.find(2);
auto it2 = s.find(4);
s.erase(it1, it2);  // Removes elements from 2 to 3 (exclusive)

// Displaying elements after range erase
for(auto it : s)
    cout << it << " ";  // Output: 1 4

// Finding bounds
auto it3 = s.upper_bound(4);  // Points to the first element greater than 4
auto it4 = s.lower_bound(5);  // Points to the first element greater than or equal to 5

cout << *it3 << " " << *it4 << endl;  // Output: (undefined behavior as no elements greater than 4)

auto it5 = s.lower_bound(4);  // Finds 4 or next greater element
cout << *it5 << " ";  // Output: 4

// Using lower_bound and upper_bound with arrays
int a[] = {1, 4, 6, 8, 10};
int* ptr = lower_bound(a, a + 5, 4);  // Returns address of first element >= 4
int ind = ptr - a;
cout << *ptr << " " << ind << endl;  // Output: 4 1

int ind2 = lower_bound(s.begin(), s.end(), 4) - s.begin();
cout << ind2 << endl;  // Output: 1 (index of 4)

// Finding the next greater element after a given value
auto it6 = s.upper_bound(4);  // Finds the next greater element
int ind3 = upper_bound(a, a + 5, 4) - a;
int ind4 = upper_bound(s.begin(), s.end(), 4) - s.begin();
cout << ind3 << " " << ind4 << endl;  // Output: 2 1
```

- Functions like begin, end, size, empty, and others work similarly to other STL containers.

----

## Multiset

- **Purpose**: `multiset` stores elements in a sorted order, but allows duplicate elements. Unlike `set`, `multiset` does not enforce uniqueness.

### Basic Operations
```cpp
multiset<int> s;

// Inserting elements
s.insert(1);
s.insert(2);
s.emplace(3);  // Faster than insert
s.insert(1);   // Duplicate allowed
s.insert(4);
s.insert(2);

// Displaying elements
for(auto i : s)
    cout << i << " ";  // Output: 1 1 2 2 3 4
cout << endl;

// Removing elements
s.erase(1);  // Removes all occurrences of 1

s.erase(s.find(2));  // Removes just one occurrence of 2

// Removing a range of elements
auto start = s.find(1);  // Iterator to the first occurrence of 1
auto end = next(start, 2);  // Iterator 2 positions ahead of 'start'
s.erase(start, end);  // Removes elements from 'start' to 'end' (exclusive)

// Displaying elements after removals
cout << endl;
for(auto i : s)
    cout << i << " ";  // Output: 2 2 3 4
```

- Functions like begin, end, size, empty, and others work similarly to set.

---- 

# Unordered Set

- **Purpose**: `unordered_set` stores elements in a hash table, providing average constant-time complexity for insertions, deletions, and lookups. Elements are stored uniquely, but their order is not guaranteed.

- Bound Functions: lower_bound and upper_bound are not available in unordered_set.

### Basic Operations
```cpp
unordered_set<int> s;

// Inserting elements
s.insert(1);
s.insert(2);
s.emplace(3);  // Faster than insert
s.insert(1);   // Duplicate, will be ignored
s.insert(4);

// Displaying elements
for (auto i : s)
  cout << i << " ";  // Output: (elements in arbitrary order) e.g., 1 2 3 4
cout << endl;

// Checking existence
auto it = s.find(2);
if (it != s.end()) 
  cout << "Element 2 found." << endl;  // Output: Element 2 found.

// Erasing elements
s.erase(1);  // Removes all occurrences of 1

s.erase(s.find(2));  // Removes just one occurrence of 2

// Displaying elements after removals
for (auto i : s)
  cout << i << " ";  // Output: (elements in arbitrary order) e.g., 3 4
cout << endl;

// Size and emptiness check
cout << "Size: " << s.size() << endl;  // Output: Size: (remaining number of elements)
cout << "Empty: " << s.empty() << endl;  // Output: Empty: (1 if empty, 0 if not empty)

// Clearing all elements
s.clear();
cout << "Size after clear: " << s.size() << endl;  // Output: Size after clear: 0
```

- Functions: insert, erase, find, size, empty, clear work similarly to set.

----

## Map

- **Purpose**: `map` stores data as key-value pairs. Keys are unique and sorted. It allows efficient retrieval, insertion, and deletion operations based on the key.

- Key-Value Storage: Keys are unique and sorted; values can be of any data type.

### Basic Operations
```cpp
// Declare maps with different key and value types
map<int, int> mp1;
map<int, pair<int, int>> mp2;
map<pair<int, int>, int> mp3;

// Inserting elements
mp1[0] = 1;                  // At key 0 store value 1
mp1.emplace(1, 2);           // At key 1 store value 2
mp1.insert({2, 3});          // At key 2 store value 3

mp3[{0, 1}] = 1;             // Insert with pair key

// Displaying all elements
for(auto it : mp1)
  cout << it.first << " " << it.second << endl;  // Output: keys and values in sorted order

// Accessing values
cout << mp1[0] << " " << mp1[1] << " " << mp1[2] << " " << mp1[4] << endl;
// Output: 1 2 3 0 (value for key 4 is 0, as default value for int is 0)

// Finding elements
auto it = mp1.find(1);
if (it != mp1.end()) {
  cout << it->first << " " << it->second << " ";  // Output: 1 2
} else {
  cout << "Key not found";
}
```

- Functions like begin, end, size, empty, clear work similarly to other associative containers.

----

## Multimap

- **Purpose**: `multimap` stores data as key-value pairs where multiple elements can have the same key. Keys are unique and sorted, but values associated with each key can be multiple.

- Key-Value Storage: Allows multiple values for the same key.
- Key Access: Unlike map, operator[] does not work for multimap. Use insert and emplace to add elements.

### Basic Operations
```cpp
// Declare a multimap
multimap<int, int> mm;

// Inserting elements
mm.insert({1, 2});
mm.insert({1, 3});
mm.insert({2, 4});
mm.emplace(2, 5);
mm.insert({3, 6});

// Displaying all elements
for(auto it : mm) {
    cout << it.first << " " << it.second << endl;  // Output: keys and values in sorted order
}

// Finding elements
auto range = mm.equal_range(1); // Get the range of elements with key 1
for(auto it = range.first; it != range.second; ++it) {
    cout << it->second << " ";  // Output: 2 3
}
cout << endl;

// Removing elements
mm.erase(1);  // Removes all elements with key 1

// Displaying remaining elements
for(auto it : mm) {
    cout << it.first << " " << it.second << endl;  // Output: keys and values in sorted order after removal
}

// Using iterators
auto it = mm.find(2);
if (it != mm.end()) {
    cout << it->first << " " << it->second << " ";  // Output: 2 4 (or 2 5 depending on insertion order)
} else {
    cout << "Key not found";
}
```

- Functions like begin, end, size, empty, clear work similarly to other associative containers.

----

## Unordered Map

- **Purpose**: `unordered_map` stores data as key-value pairs with unique keys, but the keys are not stored in a sorted order. It uses hashing to organize and access elements quickly.

- Key-Value Storage: Allows unique keys with values.
- Order: Elements are not stored in sorted order; the order is determined by the hash function.
- Funtions like begin, end, size, empty, clear work similarly to other associative containers.
  
### Basic Operations
```cpp
// Declare an unordered_map
unordered_map<int, int> um;

// Inserting elements
um[0] = 1;           // Insert with key 0 and value 1
um.emplace(1, 2);    // Insert with key 1 and value 2
um.insert({2, 3});   // Insert with key 2 and value 3

// Displaying all elements
for(const auto& it : um) {
  cout << it.first << " " << it.second << endl;  // Output: keys and values in no particular order
}

// Finding elements
auto it = um.find(1); // Find key 1
if (it != um.end()) {
  cout << it->first << " " << it->second << " ";  // Output: 1 2
} else {
  cout << "Key not found";
}
cout << endl;

// Removing elements
um.erase(1);  // Removes the element with key 1

// Displaying remaining elements
for(const auto& it : um) {
  cout << it.first << " " << it.second << endl;  // Output: keys and values after removal
}

// Using iterators
auto it2 = um.begin(); // Get iterator to the first element
cout << it2->first << " " << it2->second << endl;  // Output: first element in the unordered_map

// Size and empty checks
cout << "Size: " << um.size() << endl; // Output: number of elements
cout << "Empty: " << um.empty() << endl; // Output: 0 if not empty, 1 if empty

// Clear all elements
um.clear();
cout << "Size after clear: " << um.size() << endl; // Output: 0
}
```

----

## Algorithms

### Sorting
- **`sort`**: Used to sort elements in a container or array. Can sort in ascending or descending order.
```cpp
// Example vector of pairs
vector<pair<int, int>> vec = {{1, 4}, {2, 3}, {4, 2}, {3, 1}};

// Sort entire vector of pairs
sort(vec.begin(), vec.end()); // Sorts by first element then second element

// Sort array in ascending order
int a[] = {4, 1, 3, 2};
int n = sizeof(a) / sizeof(a[0]);
sort(a, a + n);

// Sort a subarray (elements from index 2 to 4)
sort(a + 2, a + 4);

// Sort array in descending order
sort(a, a + n, greater<int>());

cout << "Sorted values: ";
for (const auto& p : vec) {
    cout << p.second << " "; // Print second element of each pair
}
cout << endl;
```

### Bit Manipulation
__builtin_popcount: Counts the number of 1s in the binary representation of an integer.
__builtin_popcountll: Counts the number of 1s in the binary representation of a long long integer.
```cpp
int num = 7; // Binary: 0111
int cnt = __builtin_popcount(num); // Count of 1s
cout << "Number of 1s in binary representation of " << num << ": " << cnt << endl;

long long int nums = 2132142313; // Example long long integer
int cnt2 = __builtin_popcountll(nums); // Count of 1s
cout << "Number of 1s in binary representation of " << nums << ": " << cnt2 << endl;
```

Sorting:
  - sort(begin, end): Sorts elements from begin to end in ascending order.
  - sort(begin, end, comparator): Sorts elements using a custom comparator.
Bit Manipulation:
  - __builtin_popcount(x): Counts the number of 1 bits in an integer.
  - __builtin_popcountll(x): Counts the number of 1 bits in a long long integer.
    
# -----------------------------------------------------------------------------------------------------------------------------------------------------
