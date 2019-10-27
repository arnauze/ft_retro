#ifndef POSITION_HPP
# define POSITION_HPP

# include "header.hpp"

class        Position {

    public:
        Position(int x, int y);
        virtual ~Position( void );
        Position( Position const & position );
        Position &operator=(Position const & position);

        int     getX(void) const;
        int     getY(void) const;
        void	moveUp(void);
    	void	moveDown(void);
    	void	moveRight(void);
    	void	moveLeft(void);
        Position    *clone(void);

    protected:
        int	x_center;
        int y_center;
        Position(void);
};

#endif