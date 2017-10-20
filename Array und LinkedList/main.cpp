#include <iostream>
#include "Collection.h"
#include "LinkedList.cpp"

using namespace std;


int main(int argc,char **argv) {



    Collection<int> *obj = new LinkedList<int>;

    obj->add(4);

    cout << *obj << endl;

    return 0;
}