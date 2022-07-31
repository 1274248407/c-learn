#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Book
{
    public:
        string Title;
        string Author;    
        int Pages;
        Book()
        {
            Title = "No title";
            Author = "No Author";
            Pages = 0;
        }
        Book( string Title_Argument, string Author_Argument, int Pages_Argument )
        {
            Title = Title_Argument;
            Author = Author_Argument;
            Pages = Pages_Argument;
        }
};


int main()
{
    Book Book_1( "Harry Potter", "JK Rowling", 500 );
    Book Book_2( "Lord of the Rings", "Tolkein", 700 );
    Book Book_3;

    cout << Book_3.Title;

    return 0;
} 

 