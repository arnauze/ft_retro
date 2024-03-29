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
        void    setX(int x);
        int     getY(void) const;
        void    setY(int y);
        void    setVisible(bool);
        bool    getVisible(void) const;
        void	moveUp(void);
    	void	moveDown(void);
    	void	moveRight(void);
    	void	moveLeft(void);        
        Position    *clone(void);
        std::string getType(void) const;

    protected:
        int	x_center;
        int y_center;
        std::string type;
        bool    visible;
        Position(void);
};

#endif