#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <cstdlib>
#include <set>
using namespace std;


string createRandomString(int n) {
    string result = "";
    for( int i = 0; i < n; i++){
        char c = ('A' + rand() % 26) ;
        result += c;
        //cout << c;
    }
    return result;
}


int main() {
    srand(time(NULL));
/*
    vector<int> v;
    deque<int> d;

    for(int i = 0; i< 10; i++){
        v.push_back(i);
        if(i % 2== 0){
            d.push_back(i);
        }
        else{
           d.push_front(i);
        }
    }

    for (int i = 0; i < 10; i++){
        cout << v.at(i) << "  ";
    }

// between 2 und 3 50 einfügen
    v.insert(v.begin()+3, 50);

    vector<int>::iterator it;

    for(it = v.begin();it != v.end(); it++){
        cout << *it << endl;
    }
    */

    map<char ,int> cc;

    /*
    map<char, int>::iterator it;
    //cc.insert(pair<char,int>('A' , 1));

    for( int i = 0; i < s.length();i++){
        char ch = s.at(i);
        if(cc.find(ch) == cc.end()) {
            cc.insert(pair<char, int>(ch,1));
        }
        else{
            cc.at(ch)++;

        }
    }

    int zähler = 0;
*/
    string s = createRandomString(10);
    cout << s;
    set<char> GesetzteListe;

    for(int i = 0; i < s.length(); i++){
        GesetzteListe.insert(s.at(i));

    }
    cout <<endl << GesetzteListe.size() << endl;
    /*
    for( int i = 0; i < s.length();i++){
        char ch = s.at(i);
        if(cc.find(ch) == cc.end()) {
            cc.insert(pair<char, int>(ch, 1));
            zähler++;
            cout << zähler;
        }
    }

    it = cc.begin();
    //for(int i = it;)
*/
        /*
    for ( it = cc.begin(); it != cc.end();it++ ){
        char key= it->first;
        int value = it->second;
        cout << key << " : " << value;
    }
*/
    //pair<map<char,int>::iterator>
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}