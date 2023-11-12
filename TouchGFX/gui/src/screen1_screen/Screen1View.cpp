#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::onButtonClick()
{
//	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", 1);
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", ++count);
	textArea1.invalidate();
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}
