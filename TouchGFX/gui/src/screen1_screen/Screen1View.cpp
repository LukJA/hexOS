#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::callbackhdlr_b0()
{
  static uint8_t btn1_ctr = 0;

  btn1_ctr++;
  scrollList1ListItems[4].updateTxt(btn1_ctr);


}
