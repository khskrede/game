
#include <common/model/player.h>

PlayerSharedPtr
Player::Create() {
  return PlayerSharedPtr(new Player());  
}

Player::Player() {

}
