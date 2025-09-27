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

    std::string getTilte() const;
    std::string getAuthor() const;
    std::string getIsbn() const;
    bool getIsAvailable() const;

};
#endif //BOOK_H
