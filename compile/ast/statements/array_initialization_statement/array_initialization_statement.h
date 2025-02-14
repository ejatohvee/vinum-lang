#ifndef ARRAY_INITIALIZATION_STATEMENT_H
#define ARRAY_INITIALIZATION_STATEMENT_H

#include "../../ast.h"


class ArrayInitializationStatement : public Statement {
public:
    ValueType elemsType;
    std::string arrName;
    std::shared_ptr<Expression> size;
    std::vector<std::shared_ptr<Expression> > elements;

    ArrayInitializationStatement(ValueType elems_type, std::string arr_name,
        const std::shared_ptr<Expression> &size, const std::vector<std::shared_ptr<Expression>> &elements);

    void execute() override;
};



#endif //ARRAY_INITIALIZATION_STATEMENT_H
