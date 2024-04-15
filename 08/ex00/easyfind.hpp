/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:35:47 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/15 11:16:20 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <map>
# include <cstdlib>

template <typename T>
typename T::iterator easyfind( T & data, int x)
{
	typename T::iterator it;

	it = data.begin();
	while (it != data.end())
	{
		if (*it == x)
			return (it);
		it++;
	}
	throw std::runtime_error("Error : not finding");
}

# endif
