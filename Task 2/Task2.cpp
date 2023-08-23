#include <iostream>
#include <string.h>

using namespace std;

class Book{
private:
    string Title;
    string Author;
    char availability;
    int Year;
public:
    void setDetails(string title, string author, int year, char c){
        Title = title;
        Author = author;
        Year = year;
        availability = c;
    }
    bool isClassic(){
        if((2023-Year) > 50)
            return true;
        else return false;
    }
    bool checkOut(){
        if(availability == 'N')
            return true;
        else return false;
    }
    void displayStatus(){
        cout << "Book Details:" << endl;
        cout << "Title: " << Title << endl;
        cout << "Author: " << Author << endl;
        cout << "Publishing Year: " << Year << endl;
        if(isClassic())
            cout << "This book is a classic!" << endl;
        else
            cout << "This book is not a classic!" << endl;
        if(checkOut()) cout << "THIS BOOK IS CURRENTLY NOT AVAILABLE" << endl;
        else cout << "THIS BOOK IS AVAILABLE" << endl;
    }
};

int main(){
    Book book1;

    book1.setDetails("The Deathly Hallows","JK Rownlings",2003,'N'); //Y for available, N for not available
    book1.displayStatus();

    return 0;
}
