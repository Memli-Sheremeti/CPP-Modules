/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:47:44 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/05 15:57:03 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP

# include <iostream>
# include <iomanip>

# define CONS 0

class Base
{
	public :

		Base( void );
		class BaseWrong : public std::exception
		{
			public :
				const char * what() const throw();
		};	
		virtual ~Base( void );
};

#endif
