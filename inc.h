#include <iostream>
#include <string>

using namespace std;

class Order {
private:
    string type;
    int size;

public:
    Order() {
        type = "no type";
        size = 0;
        radius = 1;
        check = true;
    }
    ~Order() = default;

    //a.Отсутствие инкапсуляции
    unsigned short radius;
    bool check;

    //b.Инкапсуляция с помощью set/get
    string Get_type(){
        return type;
    }
    void Set_type(string value){
        if (value != "circle" || value != "square" || value != "triangle"){
            type = value;
        } else {
            cout << "Error! Please enter the name of the type: circle or square or triangle" << endl;
        }

    }

    //c. Инкапсуляция с помощью специализированных протоколов/методов
    int Get_size(){
        return size;
    }
    void Set_size(){
        size = size*2 + 1;
        if (size > 25) {size = 25;}
    }
};

//d. Инкапсуляция за счёт абстракций
class Abstraction {
protected:
   string types;
public:
    virtual string Print_type (int value) = 0;
};


    class Print : public Abstraction {
    private:
        string color[5] = {"flower", "circle", "triangle", "rainbow", "leopard"};
    public:
        string Print_type (int value) {
            if (value< 0 || value>4) {
                cout << "Error! Please enter one of the print: ( 0, 1, 2, 3, 4)" <<endl;
            } else {return color[value];}
        }
};
    //Расширения поведения
class Color : public Abstraction {
private:
    string color[9] = {"black", "red", "white", "yellow", "grey", "green", "purple", "orange", "pink"};
public:
    string Print_type(int value) {
        if (value < 0 || value > 8) {
            cout << "Error! Please enter the color number: ( 0, 1, .. , 7, 8)" << endl;
        } else {return color[value];}
        cout << "Used class color^^" << endl;
    }
};

//Замена поведения
class Size : public Abstraction {
private:
   int size;
public:
    string Print_type(int value) {
        size = value + 1;
        cout << "Size_1: " <<size << endl;
        size = size + value;
        cout << "Size_2: " << size << endl;
        if (size%2 == 0) {
            return "Great";
        } else return "Bee";
    }
};


//за счёт позднего связывания
    void Chto_to (Abstraction* a) {
        int x;
        cout << "Enter on of the number ( 0, 1, 2, 3, 4)" << endl;
        cin >> x;
        cout << "color type: " << a->Print_type(x) << endl;
        cout << "--------------------------------------------------"<<endl;
        cout << "color type: " << a->Print_type(6) << endl;
    }

#ifndef UNTITLED15_INC_H
#define UNTITLED15_INC_H

#endif //UNTITLED15_INC_H
