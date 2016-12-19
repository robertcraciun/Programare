#include <iostream>

using namespace std;

class Object {
      public:

          void print();
          int equals (Object&);
};

int operator == ( Object& ob1, Object& ob2) {
     return ob1.equals(ob2);
}

void Object:: print() {

    cout << &(*this);
    cout << endl;
}

int Object:: equals (Object& obj) {
    if(this == &obj)
        return 1;
    return 0;
}

int main()
{
    Object test;
    Object test2;
    Object *egal;

    *egal = test;

    test.print();
    test2.print();
    egal->print();



    if (test == test2)
        cout << "egale";
    else
        cout << "nu sunt egale";

    cout << endl;

    if (test == *egal)
        cout << "egale";
    else
        cout << "nu sunt egale";




    return 0;
}
