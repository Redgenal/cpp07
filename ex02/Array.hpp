#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array {
    private:
        T* _array;
        unsigned int _len;
    public:
        Array() : _array(new T*), _len(0) {};
        Array(unsigned int n) : _array(new T[n]), _len(n) {};
        Array(Array const &src) : _array(new T[src.size()]), _len(src.size()) {};
        ~Array() {
            if (_array)
                delete[] _array;
        };
        Array<T> &operator=(Array<T> const &src) {
            if(this != &src)
            {
                if (this->_array)
                    delete[] this->_array;
                this->_array = new T(src.size());
                this->_len = src.size();
                for (unsigned int i = 0; i < _len; i++)
                    this->_array[i]  = src.getArr(i);
            }
            return *this;
        }
        T& operator[](unsigned int i)
	    {
            if (i >= this->_len)
                throw std::exception();
            else
                return this->_array[i];
	    }

        unsigned int size() const {
            return this->_len;
        }

        T getArr(unsigned int i) const {
            if (i < this->_len)
                return (this->_array[i]);
        }
};

#endif