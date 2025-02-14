#ifndef BREAK_STATEMENT_H
#define BREAK_STATEMENT_H

#include <stdexcept>
#include "../../ast.h"

class BreakStatement : public std::runtime_error, public Statement {
public:
    BreakStatement();

    void execute() override;
};

#endif // BREAK_STATEMENT_H
