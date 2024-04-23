/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:35:47 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/23 13:53:33 by mshereme         ###   ########.fr       */
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
typename T::iterator easyFind( T & data, int x)
{
	typename T::iterator it;

	it = std::find(data.begin(), data.end(), x);
	if (it == data.end())
		throw std::logic_error("Error : not finding");
	else
		return (it);
}

# endif
