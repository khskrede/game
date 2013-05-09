
#include <iostream>

#include <client/controller/loop.h>
#include <client/view/window.h>
#include <common/model/world.h>

#include <unistd.h>

LoopSharedPtr
Loop::Create(WorldSharedPtr world, WindowSharedPtr window) {
  return LoopSharedPtr(new Loop(world, window));
}

Loop::Loop(WorldSharedPtr world, WindowSharedPtr window)
  : m_world(world)
  , m_window(window) {

}

void
Loop::Step(float timeDelta) {

  // Get keyboard input (Pull from view)

  // Update Game state from controll/client udp stuff

  // Update Game state from input if necessary
  // Update Player action based on input
  
  m_world->Step(timeDelta);

  //m_window->Update();

  std::cout << m_window->test << std::endl;

}

void
Loop::Start() {
  try {
    while(true) {
      /* change 1.0 with actual time delta and remove sleep? */
      Step(1.0);
      sleep(1.0);
    }
  }
  catch(.../* game-exit exception thrown*/) {
    return;
  }
}
