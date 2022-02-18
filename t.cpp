#include<iostream>
#include<string>
#include<list>

using namespace std;

int main(){
    set<string> names;
    names.insert("Tanjoro");
    names.insert("Inosuke");
    names.insert("Zenitsu");
    
    for(i = names.begin(); i != names.end(); i++){
        cout << *i << endl;
    }
}