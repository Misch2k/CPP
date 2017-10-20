//
// Created by Patrick Oetterli on 18.10.17.
//

#include "LinkedList.h"
using namespace std;

template <class T>
LinkedList<T>::LinkedList() : head(0), tail(0), count(0) {
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList<T> & obj) {
    head = 0;
    tail = 0;
    count = 0;
    bool ok;
    for (int i=0; i<obj.size(); i++) {
        add(obj.get(i, ok));
    }
}

template <class T>
LinkedList<T> LinkedList<T>::operator= (const LinkedList<T> & obj) {
    while (count > 0) {
        bool ok;
        remove(0, ok);
    }
    bool ok;
    for (int i=0; i<obj.size(); i++) {
        add(obj.get(i, ok));
    }
    return *this;
}

template <class T>
LinkedList<T>::~LinkedList() {
    while (count > 0) {
        bool ok;
        remove(0, ok);
    }
}

template <class T>
bool LinkedList<T>::isIndexValid(int index) const {
    return index >= 0 && index < size();
}

template <class T>
int LinkedList<T>::size() const {
    return count;
}

template <class T>
void LinkedList<T>::add(T value) {
    Node<T> *n = new Node<T>();
    n->value = value;
    n->next = 0;

    if (head == 0) {
        head = n;
        tail = n;
    } else {
        tail->next = n;
        tail = n;
    }
    count++;
}

template <class T>
void LinkedList<T>::remove(int index, bool & ok) {
    if (!isIndexValid(index)) {
        ok = false;
    } else {
        Node<T> *toDelete;
        if (index == 0) {
            toDelete = head;
            head = head->next;
            if (head == 0) {
                tail = 0;
            }
        } else {
            Node<T> *tmp = head;
            for (int i=0; i<index-1; i++) {
                tmp = tmp->next;
            }
            toDelete = tmp->next;
            if (toDelete == tail) {
                tail = tmp;
            }
            tmp->next = toDelete->next;
        }
        ok = true;
        delete toDelete;
        count--;
    }
}

template <class T>
T LinkedList<T>::get(int index, bool & ok) const {
    if (!isIndexValid(index)) {
        ok = false;
    } else {
        Node<T> *tmp = head;
        for (int i=0; i<index; i++) {
            tmp = tmp->next;
        }
        ok = true;
        return tmp->value;
    }
}

template <class T>
void LinkedList<T>::set(int index, T value, bool & ok) {
    if (!isIndexValid(index)) {
        ok = false;
    } else {
        Node<T> *tmp = head;
        for (int i=0; i<index; i++) {
            tmp = tmp->next;
        }
        tmp->value = value;
        ok = true;
    }
}

template <class U>
std::ostream & LinkedList<U>::printObj(std::ostream & stream){
    stream << "Head: " << this->head << endl;
    stream << "Tail: " << this->tail << endl;
    stream << "=============================" << endl;
    int index = 0;

    for (Node<U> *tmp = this->head; tmp != 0; tmp = tmp->next) {
        stream << "Index: " << index << endl;
        stream << "MyAddress: " << tmp << endl;
        stream << "Value: " << tmp->value << endl;
        stream << "Next: " << tmp->next << endl;
        stream << "--------" << endl;
        index++;
    }

    return stream;
}