#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();                                //costruttore di default
    Fixed(const Fixed& other);              //costruttore di copia
    Fixed& operator=(const Fixed& other);   //operatore di assegnazione
    ~Fixed();                               //distruttore

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif
