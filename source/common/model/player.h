
#include <memory>

class Player;
typedef std::shared_ptr<Player> PlayerSharedPtr;

class Player {

public:
  static PlayerSharedPtr Create();

private:
  Player();

};

