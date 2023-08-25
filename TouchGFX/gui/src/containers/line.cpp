#include <gui/containers/line.hpp>

line::line()
{

}

void line::initialize()
{
    lineBase::initialize();
}

void line::updateTxt(int newValue)
{
  Unicode::snprintf(textAreaBuffer, 32, "%d", newValue);
  textArea.invalidate();
}

