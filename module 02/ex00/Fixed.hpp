#ifndef Fixed_HPP
# define Fixed_HPP
# include <iostream>

class Fixed {
private:
    int _rawBits;
    static const int _fractionalBits = 8;

public:
    Fixed();                                //costruttore di default
    Fixed(const Fixed& other);              //costruttore di copia
    Fixed& operator=(const Fixed& other);   //operatore di assegnazione
    ~Fixed();                               //distruttore

    int getRawBits(void) const;
    void setRawBits(int const raw);
};


#endif
