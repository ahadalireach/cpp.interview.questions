#include<iostream>
#include<vector>
using namespace std;

// Structures are used to create custom data types
// In CS we call it ADT(abstract data type) || Abstraction which is a general model of something

//! ------- Creating Structure
// We use PascalCase to make it || We defintion we can't allocate memory || We just tell compiler that it has these things 
// typedef struct CustomerData{
//     int id;
//     string name;
//     string email;
// } ep;


//! ------- Initializing Structure 
// struct  Movie{
//     string Title; // String have ' ' by default
//     int releaseYear = 0; // We can also gave it a default value
//     bool isPopular; // Bool have false by default
// };


//! ------- Unpacked structure 
// struct Movie{
//     string Title;
//     int releaseYear;
// };


//! ------- Nested structure
// struct Address{
//     string street;
//     string city;
//     string zipcode;
// };

// string Customer{
//     string name;
//     Address customerAddress;
// };


//! ------- Comparing structure
// struct Movie
// {
//     string title;
//     int releaseYear;
// };


//! ------- Structures with methods
// struct Movie
// {
//     string title;
//     int releaseYear;

//     //* Method is a function which is a part of an object
//     bool equals(Movie movie){
//         return (
//             title == movie.title &&
//             releaseYear == movie.releaseYear
//         );
//     };
// };


//! ------- Defining Enumeration
//* Enum is interally represented by integer || With this we can represent new type that has same constants integer
// enum Action{
//     List = 1,
//     Add ,
//     Update
// };


//! ------- Strongly typed enumerators
// enum class Action{
//     List = 1,
//     Add ,
//     Update
// };

// enum class Action2{
//     List = 1,
//     Add ,
//     Update
// };


//! ------- Unions
union Money
{
    /* data */
    int carPrice;
    int bikePrice;
};


int main(){

    //! ------- Creating Structures
    // CustomerData customerData; // At this time compiler allocate memory
    // cout << "Enter Customer Id: ";
    // cin >> customerData.id;
    // cout << "Enter Name: ";
    // cin >> customerData.name;
    // cout << "Enter Email: ";
    // cin >> customerData.email;

    // cout << "\nName: " << customerData.name << "\t" << "Email: " << customerData.email << "\t" << "Id: " << customerData.id;


    //! ------- Initializing Structures 
    // Movie movie = { "BFM", 2023 };
    // cout << "Title: " << movie.Title << " Release Year: " << movie.releaseYear << " Is Popular: " << movie.isPopular;


    //! ------- Structured binding || Destructuring || Unpacking
    // Movie movie = { "BFM", 2023 };
    // auto [Title, releaseYear] {movie};
    // cout << "Title: " << movie.Title << " Release Year: " << movie.releaseYear;


    //! ------- Array of structures
    // vector<Movie> movies;
    // // Movie movie = {"BFM", 2023};
    // movies.push_back({"BFM 1", 2023});
    // movies.push_back({"BFM 2", 2024}); // It's like a regular array
    // for(auto movie : movies)
    //     cout << "Movie Title: " << movie.Title << "\t";

    //! ------- Nesting structures
    // Customer customer = {
    //     "Ahad",
    //     {
    //         "Nain Sukh",
    //         "Lahore",
    //         "54000"
    //     }
    // }

    // cout << customer.customerAddress.city;

    //! ------- Comparing structures
    // Movie Movie1 = { "BFM", 2023 };
    // Movie Movie2 = { "BFM", 2023 };

    // if(Movie1.title == Movie2.title && Movie1.releaseYear == Movie2.releaseYear){
    //     cout << "Same";
    // }


    //! ------- Structures with methods
    // Movie Movie1 = { "BFM", 2023 };
    // Movie Movie2 = { "BFM", 2023 };
    // if(Movie1.equals(Movie2))
    //    cout << "Same";


    //! ------- Defining Enumerations 
    //* It is an other way to create custom types
    // int select;
    // cout << "1. List invoice" << endl << "2. Add invoice" << endl << "3. Update invoice" << endl << "Select: " << endl;
    // cin >> select;
    // if(select == Action::List){
    //     cout << "List invoice";
    // }
    // else if(select == Action::Add){
    //     cout << "Add invoice";
    // }
    // else if(select == Action::Update){
    //     cout << "Update invoice";
    // }


    //! ------- Strongly typed enumerators
    //* We can't have two enumerators with same members | We need to cast the action into integer
    // int select;
    // cout << "1. List invoice" << endl << "2. Add invoice" << endl << "3. Update invoice" << endl << "Select: " << endl;
    // cin >> select;
    // if(select == static_cast<int> (Action::List)){
    //     cout << "List invoice";
    // }
    // else if(select == static_cast<int> (Action::Add)){
    //     cout << "Add invoice";
    // }
    // else if(select == static_cast<int> (Action::Update)){
    //     cout << "Update invoice";
    // }


    //! ------- Unions
    //* Are like a structures but they provide better memory management
    Money p1;
    p1.carPrice = 10000;
    p1.bikePrice = 50000; // It will overwrite other values
    cout << p1.carPrice << ' ' <<  p1.bikePrice <<  endl;

}