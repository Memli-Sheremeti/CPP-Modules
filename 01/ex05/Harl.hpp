/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:00:16 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/12 19:39:16 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
	public:

		Harl( void );
		~Harl( void );

		void	complain( std::string level ) const;
	private:

	void	debug( void ) const;
	void	info( void ) const;
	void	waring( void ) const;
	void	error( void ) const;

};


#endif
