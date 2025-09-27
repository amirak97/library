//
// Created by jack on 9/23/25.
//

#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
    private:
    std::string tilte;
    std::string author;
    std::string isbn;
    bool isAvailable;
    public:
    Book(std::string tilte, std::string author, std::string isbn, bool isAvailable);


};
#endif //BOOK_H
