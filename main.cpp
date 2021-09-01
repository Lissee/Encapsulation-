#include <iostream>
#include "inc.h"
#include <string>

using namespace std;
int main() {
    Order object;
    Color c;
    Size size;

    //a.Отсутствие инкапсуляции
    object.check = false;
    object.radius = 4;
    cout << "inpute radius object" <<endl;
    cin >> object.radius;
    cout << "--------------------------------------------------"<<endl;
    cout << "a.Отсутствие инкапсуляции" <<endl;
    cout << "radius = " << object.radius<<endl;

    //b.Инкапсуляция с помощью set/get
    object.Set_type("circle");
    cout << "--------------------------------------------------"<<endl;
    cout << "b.Инкапсуляция с помощью set/get" <<endl;
    cout << "type objects: "<<object.Get_type()<<endl;

    //c. Инкапсуляция с помощью специализированных протоколов/методов
    for (int x = 0; x < 5; x++){
        object.Set_size();
    }
    cout << "--------------------------------------------------"<<endl;
    cout << "c. Инкапсуляция с помощью специализированных протоколов/методов" <<endl;
    cout << "Size object: " << object.Get_size() << endl;

    //d. Инкапсуляция за счёт абстракций
    cout << "--------------------------------------------------"<<endl;
    cout << "d. Инкапсуляция за счёт абстракций + второе задание" <<endl;
    Chto_to(&c);
    Chto_to(&size);




    return 0;
}
