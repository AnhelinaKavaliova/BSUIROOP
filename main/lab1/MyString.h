#ifndef MYSTRING_H
#define MYSTRING_H

class MyString {
public:
    MyString();
    MyString(const char* str); // Конструктор с параметром
    //MyString(const MyString& other);
    ~MyString(); // Деструктор
    //void setData(const char* str);
    void trim(); // Метод для удаления пробелов из строки
    int length() const; // Метод для получения длины строки
    bool isEmpty() const; // Метод для проверки, пуста ли строка
    void printData() const;
private:
    char* data; // Указатель на данные строки
};

#endif
