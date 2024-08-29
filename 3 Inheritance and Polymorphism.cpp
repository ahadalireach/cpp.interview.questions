#include<iostream>
#include<vector>
#include<memory>
using namespace std;

//! ========================= Inheritance
// class Widget{
//     private:
//         bool enabled;
//     public:
//         void enable(){
//             enabled = true;
//         };
//         void disable(){
//             enabled = false;
//         };
//         bool IsEnabled(){
//             return enabled;
//         };
// };

// class TextBox : public Widget{

// };

// int main(){
//     TextBox box;
//     box.enable();
//     cout << box.IsEnabled();
// }

//* ========================= Exercise
// class Shape{
//     private:
//         string background;
//     public:
//         void setBackground(string bg){
//             background = bg;
//         };
//         string getBackground(){
//             return background;
//         };
// };

// class Circle : public Shape{

// };

// class Rectangle : public Shape{

// };

// int main(){
    
//     Circle circle;
//     circle.setBackground("Green");
//     cout << circle.getBackground() << endl;

//     Rectangle rectangle;
//     rectangle.setBackground("Blue");
//     cout << rectangle.getBackground() << endl;

// }


//! ========================= Protected members
// // We can only access protected members of this class in a derived class only
// class Widget{
//     private:
//         bool enabled;
//     protected:
//         int width;
//     public:
//         bool getEnabled() const{
//             return enabled;
//         };
//         void enable(){
//             enabled = true;
//             width = 10;
//         };
//         void disabled(){
//             enabled = false;
//         };
// };

// class TextBox : public Widget{
//     public:
//         TextBox(){
//             cout << "Enabled: " << getEnabled() << endl;
//             cout << "Width: " << width << endl;
//         };
// };

// int main(){
//     TextBox text;
//     text.enable();
// }


//! ========================= Constructors and inheritance
// class Widget{
//     private:
//         bool enabled;
//     public:
//         Widget(){
//             cout << "Widget Constructed" << endl;
//         };
//         void enable(){
//             enabled = true;
//         };
//         void disable(){
//             enabled = false;
//         };
//         bool getEnabled(){
//             return enabled;
//         };
// };

// class TextBox : public Widget{
//     public:
//         TextBox(){
//             cout << "TextBox Constructed" << endl;
//         };
// };

// int main(){
//     TextBox text;
// }


// class Widget{
//     private:
//         bool enabled;
//     public:
//         Widget() = default;
//         Widget(bool enabled) : enabled(enabled) {
//             cout << "Widget Constructed" << endl;
//         };
//         void enable(){
//             enabled = true;
//         };
//         void disable(){
//             enabled = false;
//         };
//         bool getEnabled() const {
//             return enabled;
//         };
// };

// class TextBox : public Widget{
//     using Widget::Widget; // Way to inherit base class or pass value directly
//     public:
//         // TextBox(bool enabled) : Widget(enabled) {
//         //     cout << "TextBox Constructed" << endl;
//         // };
// };

// int main(){

//     TextBox text(true);

// }


//! ========================= Destructor and inheritance
// class Widget{
//     public:
//         ~Widget(){
//             cout << "Widget Destructed" << endl;
//         };
// };

// class TextBox : public Widget{
//     public:
//         ~TextBox(){
//             cout << "TextBox Destructed" << endl;
//         };
// };

// int main(){
//     TextBox text;
// }


//! ======================== Conversion between base and derived classes
// class Widget{
//     public:
//         ~Widget(){
//             cout << "Widget Destructed" << endl;
//         };
// };

// class TextBox : public Widget{
//     public:
//         ~TextBox(){
//             cout << "TextBox Destructed" << endl;
//         };
// };

// void showWidget(Widget* widget){
    
// };

// int main(){

//     TextBox text;
//     showWidget(&text);
//     // Upcasting
//     // Widget widget = text; 
   
// }


//! ======================== Overriding methods
// class Widget{
//     public:
//         virtual void draw() const {
//             cout << "Drawing a widget" << endl;
//         };
// };

// class TextBox : public Widget{
//     public:
//         void draw() const override{
//             cout << "Drawing a textbox" << endl;
//         };
// };

// void showWidget(Widget& widget){
//     widget.draw();
// };

// int main(){
//     TextBox text;
//     showWidget(text);
// }

//* ------------------------------ Exercise
// class Shape{
//     private:
//         string background;
//     public:
//         virtual void draw() const{
//             cout << "Drawing a shape" << endl;
//         };
//         void setBackground(string bg){
//             background = bg;
//         };
//         string getBackground(){
//             return background;
//         };
// };

// class Circle : public Shape{
//     public:
//         void draw() const override{
//             cout << "Drawing a circle" << endl;
//         };
// };

// class Rectangle : public Shape{
//     public:
//         void draw() const override{
//             cout << "Drawing a rectangle" << endl;
//         };
// };

// void showShape(Shape* shape){
//     shape->draw();
// };

// int main(){
//     Circle circle;
//     Rectangle rect;
//     // showShape(&circle);
//     // showShape(circle);
//     // showShape(rect);
// }


//! ============================== Polymorphism
// class Shape{
//     private:
//         string background;
//     public:
//         virtual void draw() const{
//             cout << "Drawing a shape" << endl;
//         };
//         void setBackground(string bg){
//             background = bg;
//         };
//         string getBackground(){
//             return background;
//         };
// };

// class Circle : public Shape{
//     public:
//         void draw() const override{
//             cout << "Drawing a circle" << endl;
//         };
// };

// class Rectangle : public Shape{
//     public:
//         void draw() const override{
//             cout << "Drawing a rectangle" << endl;
//         };
// };

// void showShape(Shape* shape){
//     shape->draw();
// };

// int main(){
//     Circle circle;
//     Rectangle rect;
//     // showShape(&circle);
//     // showShape(circle);
//     // showShape(rect);
// }


//! ==================================== 
