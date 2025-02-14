#ifndef VARIABLE_EXPRESSION_H
#define VARIABLE_EXPRESSION_H

#include <string>
#include "../../ast.h"

class VariableExpression : public Expression {

public:
    explicit VariableExpression(std::string name);

    std::shared_ptr<Value> eval() override;

    std::string name;
};

#endif // VARIABLE_EXPRESSION_H
