/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:53:11 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/17 17:27:34 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>
# include <limits>
# include <cmath>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :

	MutantStack(void) {}
	~MutantStack ( void ) {}
	MutantStack( MutantStack const & obj );
	MutantStack & operator=( MutantStack const & obj );

	class Iter
};

#endif
