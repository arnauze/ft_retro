# include "../header/header.hpp"
# include "../header/Frame.hpp"

int         main(void) {
    Frame   *frame = new Frame();
    Player  *player = new Player(150, 50);

    frame->setPlayer(player);
    frame->addEnemy(new Enemy(100, 30));
    frame->addEnemy(new Enemy(125, 30));
    frame->addEnemy(new Enemy(150, 30));
    frame->addEnemy(new Enemy(175, 30));
    frame->addEnemy(new Enemy(200, 30));

    frame->init();
    frame->gameLoop();
    return (0);
}