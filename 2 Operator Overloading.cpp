#include<iostream>
#include<ostream>
#include<cstddef>
using namespace std;

//! ====================== Equality overloading
// class Length
// {
//     private: 
//         int value;
//     public:
//         explicit Length(int value) : value(value){};
//         bool operator==(const Length& other) const {
//             return value == other.value;
//         };
//         bool operator==(int other) const {
//             return value == other;
//         };
//         bool operator!=(int other) const {
//             // return value != other;
//             return !(value == other);
//         };

// };

// int main(){
//     Length first(10);
//     Length second(10);
//     if(first == second){
//         cout << "Equal\n";
//     };
//     if(first == 10){
//         cout << "Equal\n";
//     };
//     if(first != 20){
//         cout << "Not Equal";
//     }
// }


// ------------------------ Exercise
// class Point{
//     private:
//         int x, y;
//     public:
//         explicit Point(int x, int y) : x(x), y(y) {};
//         bool operator==(const Point &other){
//             return (x == other.x) && (y == other.y);
//         };
// };

// int main(){
//     Point first(10, 20);
//     Point second(10, 20);
//     cout << (first == second) << endl;
// }


//! ======================= Overloading the comparison operator
class Length{
    private:
        int x, y;
    public:
        Length(int x, int y) : x(x), y(y) {};
        bool operator<(Length& other){
            return (x < other.x && y < other.y);
        };
        bool operator<=(Length& other){
           return (x <= other.x && y <= other.y);
        };
        bool operator>(Length& other) {
            return (x > other.x && y > other.y);
        };
        bool operator>=(Length& other) {
            return (x >= other.x && y >= other.y);
        };
};

int main(){
    Length first(10);
    Length second(10);
    cout << (first < second) << endl;
    cout << (first <= second) << endl;
    cout << (first > second) << endl;
    cout << (first >= second) << endl;
}


//! ========================== Overloading the spaceship operator
// class Length{
//     private:
//         int x;
//     public:
//         Length(int x) : x(x) {};
//         bool operator==(const Length& other) const {
//             return x == other.x;
//         };
//         strong_ordering operator<=>(const Length& other) const {
//             return x <=> other.x;
//         };
// };

// int main(){

//     // int x = 5, y = 5;
//     // auto result = 5 <=> y;
//     // if(result == strong_ordering::less){
//     //     cout << "X is less than Y";
//     // };

//     Length first(10);
//     Length second(20);
//     if (first < second) {
//         cout << "First is less than second" << endl;
//     } else if (first == second) {
//         cout << "First is equal to second" << endl;
//     } else {
//         cout << "First is greater than second" << endl;
//     };

// }


//! ====================== Overload the insertion operator
// class Length{
//     private:
//         int value;
//     public:
//         Length(int value) : value(value){};
//         void setValue(int Value){
//             value = Value;
//         }
//         int getValue(){
//             return value;
//         };
// };

// ostream& operator<<(ostream& stream, const Length& length){
//     stream << length.getValue();
//     return stream;
// };

// int main(){
//     Length length(10);
//     cout << length << endl;
// }

// ---------------------------- Exercise
// class Point{
//     private:
//         int x, y;
//     public:
//         Point(int x, int y) : x(x), y(y) {};
//         void setX(int X){
//             x = X;
//         };
//         void setY(int Y){
//             y = Y;
//         };
//         int getX(){
//             return x;
//         };
//         int getY(){
//             return y;
//         };
// };

// ostream& operator<<(ostream& os, const Point& p){
//     os << "(" << p.getX() << ", " << p.getY() << ")";
//     return os;
// };

// int main(){
//     Point p(10, 20);
//     cout << p << endl;
// }


//! ============================ Overload the extraction operator
// class Point
// {
//     private:
//         int value;
//     public:
//         Point(int value) : value(value) {};
//         void setValue(int Value){
//             value = Value;
//         };
//         int getValue(){
//             return value;
//         };
// };

// istream operator>>(istream& stream, Point& point){
//     int value;
//     stream >> value;
//     point.setValue(value);
//     return stream;
// };

// int main(){
//     Point first;
//     cin >> first;
// }


//! ==================== Friend of classes
// class Operator{
//     private:
//         int value;
//     public:
//         Operator(int value) : value(value) {};
//         int getValue(){
//             return value;
//         };
//         friend ostream operator<<(ostream& os, Operator& op){
//             os << op.getValue();
//             os << op.value;
//         };
// };


// int main(){
//     Operator op(10);
//     cout << op;
// }


//! ===================== Overload the arithmetic operator
// class Arm{
//     private:
//         int value;
//     public:
//         Arm(int value) : value(value) {};

        Arm operator+(const Arm& other) const {
            return Arm(value + other.value);
        };

        Arm operator+(int intValue) const {
            return Arm(value + intValue);
        };

//         friend ostream& operator<<(ostream& os, const Arm& arm) {
//             os << arm.value;
//             return os;
//         };

// };

// int main(){
//     Arm arm1(10);
//     Arm arm2(10);
//     Arm arm3 = arm1 + arm2;
//     Arm arm4 = arm1 + 10;
//     cout << arm3 << endl; 
//     cout << arm4;
// }

//! ======================= Compound Assignment
// class Length{
//     private:
//         int value;
//     public:
//         Length(int value) : value(value) {};

//         Length operator+(const Length& other) const {
//             return Length(value + other.value);
//         };

//         Length& operator+=(const Length& other){
//             value += other.value;
//             return *this;
//         };

//         friend std::ostream& operator<<(std::ostream& os, const Length& length) {
//             os << length.value;
//             return os;
//         };
// };

// int main(){
//     Length length1(10);
//     Length length2(10);
//     length1 += length2;
//     cout << length1 << endl;
// }


//! ========================= Overload the assignment operator
// class Length{
//     private:
//         int value;
//     public:
        
//         Length(int value) : value(value) {};

//         Length& operator=(const Length& other){
//             cout << "Object Assigned" << endl;
//             value = other.value;
//             return *this;
//         };

//         friend ostream& operator<<(ostream& stream, const Length& other){
//             stream << other.value;
//             return stream;
//         };

// };

// int main(){
//     Length length1(10);
//     Length length2(10);
//     Length length3 = length2; // Copy constructor is called
//     length1 = length2; // Assign constructor
//     cout << length1;
// }


//! ========================= Overload the urinary operator
// class Length{
//     private:
//         int value;
//     public:

//         Length(int value) : value(value){};
        

//         Length& operator++(){
//             value++;
//             return *this;
//         }; // Prefix

//         Length operator++(int){ // We can't be modified the existing object
//             Length copy = *this;
//             // operator++();
//             ++(*this); 
//             return copy;
//         }; // Postfix

//         friend ostream& operator<<(ostream& stream, const Length& other){
//             stream << other.value;
//             return stream;
//         };

// };

// int main(){

//     // int x = 10;
//     // int y = ++x;
//     // int y = x++; // Copy of x stored and returned in x

//     Length first(10);
//     Length second(10);

//     second = first++;

//     cout << first << " " << second;

// }


//! ======================= Overload the subscript operator
// class Array{
//     private:
//         int* values;
//         size_t size;    
//     public:
//         explicit Array(size_t size){
//             values = new int[size];
//             this->size = size;
//         };
//         ~Array(){
//             delete[] values;
//         };
//         int& operator[](size_t index){
//             if(index >= size)
//                 cout << "Array index out of bounds";
//             return values[index];
//         }
// };

// int main(){

//     Array Array1{10};
//     Array1[0] = 1; // We can't access single element from an array therefore we need to overload it
//     cout << Array1[0] << endl;

// }


//! =========================== Overload indirection operator
// class SmartPointer{
//     private:
//         int* ptr;
//     public:
//         SmartPointer(int* ptr) : ptr(ptr) {};
//         ~SmartPointer(){
//             delete ptr;
//             ptr = NULL;
//         };
//         int& operator*(){
//             return *ptr;
//         };
// };

// int main(){
//     SmartPointer ptr{new int};
//     *ptr = 100;
//     cout << *ptr << endl;
//     *ptr = 101;
//     cout << *ptr << endl;
// }


//! =========================== Overload type conversion
// class Length{
    // private:
    //     int value;
    // public:
    //     Length(int value) : value(value) {};
    //     operator int() const {
    //         return value;
    //     };
// };

// int main(){
//     Length length(10);
//     // int x = length;
//     int x = static_cast<int>(length);
//     cout << x << endl;
// }


//! ========================== Inline functions
// Only with 1 liner | performance disturb
// class Length{
//     private:
//         int value;
//     public:
//         Length(int value) : value(value) {};
//         inline int getValue() const {
//             return value;
//         };
// };

// int main(){
//     Length length1(10);
//     cout << length1.getValue() << endl;
// }