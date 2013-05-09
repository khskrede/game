
#include <memory>

class GameWindow;

typedef std::shared_ptr<GameWindow> GameWindowSharedPtr;

class GameWindow {

public:
  static GameWindowSharedPtr Create();

  int test;

private:
  GameWindow();
};

