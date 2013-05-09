
#include <view/gamewindow.h>

GameWindowSharedPtr
GameWindow::Create() {
  return GameWindowSharedPtr( new GameWindow() );
}

GameWindow::GameWindow() {
  test = 2;
}

