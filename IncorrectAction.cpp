//
// Created by Alex on 10.09.18.
//

#include "IncorrectAction.h"

IncorrectAction::IncorrectAction(const char *msg) : msg(msg)
{

}

const char *IncorrectAction::what() const noexcept
{
    return msg;
}

IncorrectAction::~IncorrectAction()
{

}
