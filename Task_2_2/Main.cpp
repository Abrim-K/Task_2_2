#include <iostream> 
#include "Function.h" 
#include "Exp.h" 
#include "Line.h" 
#include "Action.h" 
#include "Calculation.h" 
#include "Tabulation.h" 
#include "AnyAction.h" 
#include "Menu.h" 
using namespace std;

Function* pObjs[] = { &f_exp, &f_line };
vector<Function*> funcList(pObjs, pObjs + sizeof(pObjs) / sizeof(Function*));
Action* pActs[] = { &calculation, &tabulation, &any_action };
vector<Action*> operList(pActs, pActs + sizeof(pActs) / sizeof(Action*));

int main() {
    Menu menu(funcList, operList);
    while (Function* pObj = menu.SelectObject()) {
        Action* pAct = menu.SelectAction(pObj);
        pAct->Operate(pObj);
    }
    cout << "Bye!\n";
    return 0;
}