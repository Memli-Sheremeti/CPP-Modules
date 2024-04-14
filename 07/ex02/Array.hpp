#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T> class Array 
{
    private :
    T *arr;
    unsigned int size;

    public :
    Array( unsigned int n );
    ~Array( void );
    Array ( Array const & obj);
    Array & operator=( Array const & obj);

    T & operator[]( int index );
    bool operator!=( Array ) 

    class WrongArray : public std::exception
    {
        public :
        const char * what() const throw();
    };
};
#endif 