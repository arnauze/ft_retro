# include "../header/header.hpp"
# include "../header/Frame.hpp"

int         main(void) {
    Frame   *frame = new Frame();
    Player  *player = new Player(150, 50);

    frame->setPlayer(player);
    frame->addEnemy(new Enemy(100, 4));
    frame->addEnemy(new Enemy(105, 7));
    frame->addEnemy(new Enemy(150, 10));
    frame->addEnemy(new Enemy(127, 13));
    frame->addEnemy(new Enemy(200, 15));

    frame->init();
    frame->gameLoop();
    return (0);
}