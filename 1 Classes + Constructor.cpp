#include<iostream>
#include<memory>
using namespace std;

class Rectangle
{
    private:
        int width, height;
        string color;
    public:
        Rectangle() = default;
        Rectangle(int width, int height){
            cout << "Constructing A Rectangle" << endl;
            setWidth(width);
            setHeight(height);
        };
        Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
            cout << "Constructing A Rectangle With Color" << endl;
            this->color = color;
        };
        void draw(){
            cout << "Drawing Rectangle" << endl;
            cout << "Dimensions: " << width << ", " << height << endl;
        };
        int getArea(){
            return width * height;
        };    
        // Getter 
        int getWidth(){
            return width;
        };
        // Setter
        void setWidth(int width){
            if(width < 0){
                throw invalid_argument("width");
            }
            else{
                (*this).width = width;
                // this->width = width;
            }
        }
        // Getter
        int getHeight(){
            return height;
        }
        // Setter
        void setHeight(int height){
            if(height < 0){
                throw invalid_argument("height");
            }
            else{
                (*this).height = height;
            }
        }
};

int main() {
    Rectangle Rectangle1{10, 20, "Green"};
    Rectangle Rectangle2 = Rectangle1;

    // Old technique of using pointers   
    Rectangle* rectangle = new Rectangle(10, 20, "Green");
    rectangle->draw();
    delete rectangle;
    rectangle = nullptr;

    // Smart pointer technique of using pointers
    unique_ptr<Rectangle> smartRectangle = make_unique<Rectangle>(10, 20, "Green");
    smartRectangle->draw();

    // Array of objects
    Rectangle rectangles[] = {
        {},
        {10, 20},
        {10, 20, "Green"}
    };

    for(Rectangle rect: rectangles){
        rect.draw();
    }
}

//! ====================== Explicit 

// #include<iostream>
// using namespace std;

// class Person{
//     private:
//         int age;
//     public:
//         explicit Person(int age){
//             cout << "Age: " << age << endl;
//         }
// };

// void showPerson(Person person){

// };

// int main(){
//     Person person1(18);
//     showPerson(person1);
// }


//! ================= Constructor delegation
// #include<iostream>
// using namespace std;

// class Rectangle{
//     private:
//         int width, height;
//         string color;
//     public:
//         Rectangle(int width, int height){
//             setWidth(width);
//             setHeight(height);
//         };
//         Rectangle(int width, int height, const string& color) : Rectangle(width, height){
//             this->color = color;
//         };
//         void setWidth(int width){
//             this->width = width;
//         };
//         int showWidth(){
//             return this->width;
//         };
//         void setHeight(int height){
//             this->height = height;
//         };
//         int showHeight(){
//             return this->height;
//         }
// };


// ======================== Copy constructor
// #include<iostream>
// using namespace std;

// class Room
// {
//     int id;
//     public:
//         Room(int ids){
//             id = ids;
//         };
//         Room(Room &Room2){
//             id = Room2.id;
//         };
//         ~Room(){
//             cout << " Destructor Called" << endl;
//         };
//         void display(){
//             cout << "Room " << id << endl;
//         };
// };

// int main(){
//     Room room1(100);
//     // Room room2(room1);
//     // Room room3 = room1;

//     cout << "Room 1: ";
//     room1.display(); 
//     // cout << "\nRoom 2: ";
//     // room2.display();
//     // cout << "\nRoom 3: ";
//     // room3.display();
// }

//! ======================= Static member
// #include<iostream>
// using namespace std;

// class Rectangle
// {
//     private: 
//         int width, height;
//         static int rectangleCounter;
//     public:
//         Rectangle(int width, int height) : width(width), height(height) {
//             cout << "Constructing rectangle" << endl;
//             rectangleCounter++;
//         };
//         static int getRectangleCounter(){
//             return rectangleCounter;
//         };
// };

// int Rectangle::rectangleCounter = 0;

// int main(){
//     Rectangle Rectangle1(10, 20);
//     Rectangle Rectangle2(10, 20);
//     cout << Rectangle::getRectangleCounter() << endl;
// }

//! ====================== Static objects and functions
// #include <iostream>
// using namespace std;

// class Room
// {
// private:
//     int width, height;
//     static int counter;

// public:
//     void drawRoom() const {
//         cout << "Drawing Room" << endl;
//         counter++;
//     }
    
//     static int getCounter() {
//         return counter;
//     }

//     Room(int width, int height) : width(width), height(height) {}
// };

// int Room::counter = 0;

// int main() {

//     Room Room1(10, 20);
//     Room1.drawRoom();

//     cout << "Counter: " << Room::getCounter() << endl;

// }


//! ================= Pointer with class
// class SmartPointer
// {
//     private:
//         int* ptr;
//     public:
//         explicit SmartPointer(int* ptr) : ptr(ptr) {};
//         ~SmartPointer(){
//             delete ptr;
//             ptr = nullptr;
//         };
// };

// int main(){
//     SmartPointer Smart(new int);

// }