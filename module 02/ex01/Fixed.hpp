
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;
public:
    Fixed();
    Fixed(const int n);
    Fixed(const float f);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();

    float toFloat() const;
    int toInt() const;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
