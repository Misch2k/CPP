#include <iostream>

using namespace std;
// Aufgabe GGT
int ggt(int a,int b){
    while(a!=b){
        if(a>b) {

            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}
int ggtRekursiv(int a,int b){


    if (a > b) {

        a = a - b;
    }
    else {
        b = b - a;
    }

    if (a == b) {
        return a;

    }
    else{
        return ggtRekursiv(a,b);
    }


}

class Component{
private:
    int id;
    string name;
    double price;
public:

    void setValues(int idn, string namen, double pricen){
        id = idn;
        name = namen;
        price = pricen;
    }

    int getId( ){return id;}
    string getName( ){return name;}
    double getPrice( ){return price;}
};


Component** removeComponent(int id, Component **array, int & size){
    if(id >= 0){
        for (int i = id; i < size-1; i++){
            *array[i] = *array[i+1];
        }
        size -= 1;
        return array;
    }
    else {
        return array;
    }

}



int main(int argc, char **argv) {

    /*{ // Aufgabe GGT
        int a = 25;
        int b = 45;
        //cout << ggt(25,45);
        cout << ggtRekursiv(25, 45);
    }*/
/*
    {
        int size = 10;
        Component **array;
        for(int i= 0; i < 4;i++) {
            *array = new Component[size];
        }

        Component obj1;
        obj1.setValues(1,"h",3.1);
        Component obj2;
        obj1.setValues(2,"ha",3.2);
        Component obj3;
        obj1.setValues(3,"hal",3.3);
        Component obj4;
        obj1.setValues(4,"hall",3.4);

        *array[0] = obj1;
        *array[1] = obj2;
        *array[2] = obj3;
        *array[3] = obj4;

        removeComponent(2,array,size);

        cout << obj2.getId();
        cout << obj2.getName();
        cout << obj2.getPrice();
        //}
    }
*/


    return 0;
}