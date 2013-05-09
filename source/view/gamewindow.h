
#include <memory>

typedef GameWindowSharedPtr std::shared_ptr<GameWindow>;

class GameWindow {

public:
  GameWindowSharedPtr Create();

  int test;

private:
  GameWindow();
};

