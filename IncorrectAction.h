//
// Created by Alex on 10.09.18.
//

#ifndef TET_INCORRECTACTION_H
#define TET_INCORRECTACTION_H

#include <exception>

class IncorrectAction : public std::exception
{
private:
    const char* msg;
public:
    explicit IncorrectAction(const char *msg);
    virtual ~IncorrectAction();

    const char* what() const noexcept override;
};


#endif //TET_INCORRECTACTION_H
