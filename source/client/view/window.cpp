
#include <client/view/window.h>

WindowSharedPtr
Window::Create() {
  return WindowSharedPtr(new Window());
}

Window::Window() {
  test = 2;
}

void
Window::Update() {

}
