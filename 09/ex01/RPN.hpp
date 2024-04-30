/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:35:47 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/24 14:07:06 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stdio.h>
# include <string.h>
# include <fstream>
# include <sstream>
# include <iomanip>
# include <algorithm>
# include <stack>
# include <ctime>

class RPN
{
	private :

	std::stack<int>			stack;
	long						x;
	long						y;

	RPN( void ) : x(0), y(0) {return ; }
	RPN( RPN const & obj );
	RPN & operator=(RPN const & obj);

	public :

	RPN( std::string str );
	~RPN() { return ; }

	void	getRes( void ) const;
};

# endif
