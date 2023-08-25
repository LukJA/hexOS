#ifndef LINE_HPP
#define LINE_HPP

#include <gui_generated/containers/lineBase.hpp>

class line : public lineBase
{
public:
    line();
    virtual ~line() {}

    virtual void initialize();
    virtual void updateTxt(int);
protected:
};

#endif // LINE_HPP
