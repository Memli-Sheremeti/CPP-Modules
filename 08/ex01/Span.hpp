#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <limits>

class Span
{
	private :

	std::vector<unsigned int>	_number;
	unsigned int				_size;

	public :

	Span(void);
	Span( unsigned int n );
	~Span ( void );
	Span( Span const & obj );
	Span & operator=( Span const & obj );

	void	addNumber( unsigned int n );
	unsigned int shortestSpan( void );
	unsigned int longestSpan( void );
};

#endif
