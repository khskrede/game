
#include <common/model/world.h>
#include <common/model/player.h>

WorldSharedPtr
World::Create() {
  return WorldSharedPtr(new World());
}

World::World() {
  test = 2;
}

void
World::Step(float timeDelta) {

}

