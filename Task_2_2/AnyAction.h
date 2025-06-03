#include "Action.h" 

class AnyAction : public Action {
public:
    AnyAction() : name("Any action") {}
    const std::string& GetName() const { return name; }
    void Operate(Function*);
private:
    std::string name; // обозначение операции 
};

extern AnyAction any_action;