
#include <memory>

class Window;
typedef std::shared_ptr<Window> WindowSharedPtr;

class Window {

public:
  static WindowSharedPtr Create();

  void Update();

  int test;

private:
  Window();

};

