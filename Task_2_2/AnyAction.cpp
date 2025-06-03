#include <iostream> 
#include "AnyAction.h" 
using namespace std;

void AnyAction::Operate(Function*) {
    cout << "Your advertising might be here!" << endl;
    cin.get();
}

// Глобальный объект 
AnyAction any_action;