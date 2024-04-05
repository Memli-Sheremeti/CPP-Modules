/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 15:36:19 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_CLASS_HPP
# define SERIALIZER_CLASS_HPP

# include <iostream>
# include <stdint.h>
# define CONS 0

struct Data
{
	std::string lol;
	int			x;
};

class Serializer
{
	private :

		Serializer ( const Serializer &obj );
		Serializer & operator=(const Serializer &obj);
		Serializer( void );
		virtual ~Serializer( void );
		
	public:
		static uintptr_t	seralize( Data* ptr );
		static Data*		deserialize( uintptr_t raw );
};


#endif
