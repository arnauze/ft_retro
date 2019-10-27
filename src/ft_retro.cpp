# include "../header/header.hpp"
# include "../header/Frame.hpp"

int         main(void) {
    Frame   *frame = new Frame();
    Player  *player = new Player(150, 50);

    frame->setPlayer(player);
    frame->init();
    frame->gameLoop();
    return (0);
}