#ifndef ENEMY_HPP
# define ENEMY_HPP

class        Enemy {

    public:
        Enemy();
        ~Enemy( void );
        Enemy( Enemy const & enemy );
        Enemy &operator=(Enemy const & enemy);

    private:
        int	x_center;
        int y_center;

};

#endif