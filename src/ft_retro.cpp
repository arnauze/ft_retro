# include "../header/header.hpp"
# include "../header/Frame.hpp"

int         main(void) {
    Frame   *frame = new Frame();

    frame->init();
    frame->gameLoop();
    return (0);
}