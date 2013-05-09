
#include <memory>

class Loop;
typedef std::shared_ptr<Loop> LoopSharedPtr;

class Window;
typedef std::shared_ptr<Window> WindowSharedPtr;

class World;
typedef std::shared_ptr<World> WorldSharedPtr;


class Loop {

public:
  static LoopSharedPtr Create(WorldSharedPtr world, WindowSharedPtr window);

  void Start();

private:
  Loop(WorldSharedPtr world, WindowSharedPtr window);

  void Step(float deltaTime);

  WorldSharedPtr m_world;
  WindowSharedPtr m_window;

};

