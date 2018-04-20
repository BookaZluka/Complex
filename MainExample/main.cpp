#include <iostream>
#include "complex.h"

using namespace std;

template<typename T>
Complex<T> Complex<T>::operator -() const {
    return Complex(-m_real, -m_imag);
}

template<typename T>
Complex<T>& Complex<T>::operator +=(const Complex<T>& c2) {
    m_real += c2.m_real;
    m_imag += c2.m_imag;
    return *this;
}

template<typename T>
Complex<T>& Complex<T>::operator -=(const Complex<T>& c2) {
    return *this += -c2;
}

template<typename T>
Complex<T>& Complex<T>::operator *=(const Complex<T>& c2) {
    T real = m_real * c2.m_real - m_imag * c2.m_imag;
    T imag = m_real * c2.m_imag + m_imag * c2.m_real;
    m_real = real;
    m_imag = imag;
    return *this;
}

template<typename T>
Complex<T>& Complex<T>::operator /=(const Complex<T>& c2) {
    Complex<T> nm = Complex<T>(*this) * Complex<T>(c2.m_real, -c2.m_imag);
    T dn = c2.m_real * c2.m_real + c2.m_imag * c2.m_imag;
    m_real = nm.m_real / dn;
    m_imag = nm.m_imag / dn;
    return *this;
}

template<typename T>
Complex<T> Complex<T>::operator +(const Complex<T>& c2) const {
    return Complex<T>(*this) += c2;
}

template<typename T>
Complex<T> Complex<T>::operator -(const Complex<T>& c2) const {
    return Complex<T>(*this) -= c2;
}

template<typename T>
Complex<T> Complex<T>::operator *(const Complex<T>& c2) const {
    return Complex<T>(*this) *= c2;
}

template<typename T>
Complex<T> Complex<T>::operator /(const Complex<T>& c2) const {
    return Complex<T>(*this) /= c2;
}

template<typename T>
ostream& operator <<(ostream& os, const Complex<T>& c) {
    os << c.m_real;
    if (c.m_imag < 0)
        os << c.m_imag << "i";
    else if (c.m_imag > 0)
        os << "+" << c.m_imag << "i";
    return os;
}

int main() {
    Complex<double> c1(3), c2(1, 4);
    cout << "c1=" << c1 << endl;
    cout << "c2=" << c2 << endl;
    cout << "c1+c2=" << (c1 + c2) << endl;
    cout << "c1-c2=" << (c1 - c2) << endl;
    cout << "c1*c2=" << (c1 * c2) << endl;
    cout << "c1/c2=" << (c1 / c2) << endl;
    return 0;
}
