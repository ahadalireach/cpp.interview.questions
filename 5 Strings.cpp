#include <iostream>
using namespace std;

//! ------- Working with the characters
bool isValid(string customerNumber){
    if(customerNumber.length() != 6)
       return false;
    for(int i = 0; i < 2; i++)
       if(!isalpha(customerNumber[i]))
          return false;
    for(int i = 0; i < 4; i++)
       if(!isalnum(customerNumber[i]))
          return false; 
    return true;              
}

int main(){

    //! ------- C Strings

    //* Two ways of writing name or large characters
    // Last character of char string is null terminator (\0)
    // char name[5] = { 'A', 'h', 'a', 'd', '\0'};
    
    // String literal have null terminator already or by default
    // char firstName[5] = "Ahad"; // We can access their different characters using ([]) which is also known as charater literal
    
    // firstName[0] = 'A'; //* Character Literal
    // cout << firstName[0] << endl;
    // cout << strlen(firstName) << endl; //* It counts all the characters until it gets the null terminator
    // char lastName[] = "Ali";
    //* strcat(firstName, lastName); // It concatenates both arrays but it disturbs the size of the first array
    // cout << firstName;
    //* strcpy(firstName, lastName);
    // cout << firstName << endl;
    //* if(strcmp(firstName, lastName) == 0)
    //     cout << "Equal" << endl;

    
    //! ------- C++ Strings
    // string firstName = "Ahad", lastName = "Ali";
    // firstName[0] = 'a';
    // cout << firstName << endl;
    // We can access all the functions of string by writing ( . ) with our variable name
    //* cout << firstName.length() << endl; // Getting the length
    //* firstName += " Ali"; //Concatenation
    // cout << firstName;
    //* string completeName = firstName; // Copying string
    //* if(firstName == completeName) cout << "Equal"; // Comparing string
    //* firstName.starts_with('A'); // Check if string start with character
    //* firstName.ends_with('A'); // Check if string ends with character
    //* firstName.empty(); // Check if string is empty
    //* cout << firstName.front(); // It returns the first character of a string
    //* cout << firstName.back(); // It returns the last character of a string
    // firstName[firstName.length() -1]; It return the last character of a string


    //! ------- Modifying string
    // string firstName = "Ahad";
    //* cout << firstName.append(); // It use to add the string at the end of the main string
    //* cout << firstName.insert(0, "A"); // It add string at a particular position 
    //*cout << firstName.erase(0, 2) // It remove characters at a particular position
    // cout << firstName.clear(); // It will clear our string
    // cout << firstName.replace(0, 2, "AH"); // It will replace characters at a particular position


    //! ------- Searching strings
    // string name = "Ahad Ali!";
    // cout << name.find("A") << endl;
    // cout << name.rfind("a") << endl;
    // cout << name.find('A', 5) << endl;
    // if(name.find('A') == -1)
    //    cout << "Doesn't Exist";
    // cout << name.find_first_of(";.,!");
    // cout << name.find_last_of(";.,!");   
    // cout << name.find_last_not_of(';.!'); // Return position of last character that is not any of this
    // cout << name.find_first_not_of(';.!'); // Return position of first character that is not any of this

    //! ------- Extracting strings
    // string name = "Ahad Ali";
    // string firstName = name.substr(0, name.find_first_of(' ')); // name.find(' ')
    // string lastName = name.substr(name.find_first_of(' ')); // name.rfind(' ')
    // cout << firstName << "      " << lastName;

    //! ------- Working with the characters
    // string name = "Ahad Ali";
    // cout << isupper(name[0]) << "\t";
    // cout << islower(name[0]) << "\t";
    // cout << isalpha(name[4]) << "\t";
    // cout << isdigit(name[4]) << "\t";
    // cout << isspace(name[4]) << "\t";
    // cout << (char)toupper('a') << "\t"; // It return ascii no if we want to get actual digit we need to add (char) and if we give it special character then it will give same character
    // cout << (char)tolower('A') << "\t";
    
    // string customerNumber = "as1234";
    // cout << isValid(customerNumber);

    //! ------- String numeric conversion functions
    // At gui application we need to convert string to integer of a user input
    //* String to numbers
    // double std = stod("19.99");
    // double std = stod("19.99x"); // It should be work correctly when we add some alphabet with that therefore we use stream to prevent from overflow
    // double std = stod("19.x99");
    // double std = stod("x19.99");
    
    //* Numbers to strings
    // string nts = to_string('199.9');
    // cout << nts;

    //! ------- Escape sequences
    // Special characters have different meaning in strings therefore we need to escape them
    // string name = "\\Ahad Ali";
    // string name = "\"Ahad Ali\"";
    // string name = "'Ahad Ali'";
    // char name = '\'';
    // string name = "Ahad Ali\n";
    // string name = "Ahad Ali\t";
    // cout << name;


    //! ------- Raw strings
    // string folder = "c:\\ahadali\\users\\data\coding";
    // string folder = R"(c:\\ahadali\\users\\data\coding)";
    // cout << folder;

};