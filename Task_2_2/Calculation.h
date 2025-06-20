#include "Action.h" 

class Calculation : public Action {
public:
    Calculation() : name("Calculation") {}
    const std::string& GetName() const { return name; }
    void Operate(Function*);
private:
    std::string name; // обозначение операции 
};

extern Calculation calculation;