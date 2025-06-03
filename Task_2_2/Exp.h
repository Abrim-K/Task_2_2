#include <math.h> 
#include "Function.h" 

// Класс для представления функции у = е ^ х 
class Exp : public Function {
public:
    Exp() : name("e ^ x") {}
    const std::string& GetName() const { return name; }
    void SetCoeff() {}
    double GetVal() const { return exp(x); }
private:
    std::string name; // мат. обозначение функции 
};

extern Exp f_exp;
