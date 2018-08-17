#pragma once

#include "widget.hpp"

#include <switch.h>

class WidgetValue : public Widget {
public:
  WidgetValue(LuaSaveParser *saveParser, std::string preEquation, std::string postEquation, std::string postEquationInverse, s64 minValue, s64 maxValue, u64 stepSize);
  ~WidgetValue();

  void draw(Gui *gui, u16 x, u16 y);

  void onInput(u32 kdown);
  void onTouch(touchPosition &touch);

private:
  s64 m_minValue, m_maxValue;
  u64 m_stepSize;
};
