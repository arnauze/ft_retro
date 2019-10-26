#ifndef FRAME_HPP
# define FRAME_HPP

# include "header.hpp"

class                   Frame {
    public:
        Frame(void);
        ~Frame(void);
        Frame(Frame const & frame);
        Frame               &operator=(Frame const & frame);
    private:
        
};

#endif