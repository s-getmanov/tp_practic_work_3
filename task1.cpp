// Создать собственный класс Студент. Добавить поле типа int, хранящее номер студенческого билета, а также поле типа string, хранящее название факультета. 
// Также добавить метод, который выводит в консоль название факультета и номер студенческого билета. 
// В основное программе создать объект класса Студент, через эту созданную переменную класса задать значения для обоих полей, а затем вызвать метод класса

#include <iostream>

using namespace std;

class Student{

public:
    
    int nun_bilet = 0;
    string facultet = "";

    void print(){
        cout << "Facultet <" << facultet << ">, nomer bileta <" << nun_bilet << ">";
    }
};

int main(){

    Student student;

    student.facultet = "Full stack programming";
    student.nun_bilet = 777;

    student.print();
    
    return 0;
}