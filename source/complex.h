#include <iostream>
using namespace std;

template<typename T>
class Complex {
private:
    T m_real;
    T m_imag;
public:
    Complex<T>(T real=0.0, T imag=0.0)
            :m_real(real), m_imag(imag) { };
    Complex<T>(const Complex<T>& c)
            :m_real(c.m_real), m_imag(c.m_imag) { };
    Complex<T> operator -() const;
    Complex<T>& operator +=(const Complex<T>&);
    Complex<T>& operator -=(const Complex<T>&);
    Complex<T>& operator *=(const Complex<T>&);
    Complex<T>& operator /=(const Complex<T>&);
    Complex<T> operator +(const Complex<T>&) const;
    Complex<T> operator -(const Complex<T>&) const;
    Complex<T> operator *(const Complex<T>&) const;
    Complex<T> operator /(const Complex<T>&) const;
    template<typename U>
    friend ostream& operator <<(ostream&, const Complex<U>&);
};
