
#include <memory>

class World;
typedef std::shared_ptr<World> WorldSharedPtr;

class World {

public:
  static WorldSharedPtr Create();

  void Step(float deltaTime);
  int test;

private:
  World();

};

