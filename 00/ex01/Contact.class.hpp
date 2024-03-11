/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 17:40:52 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/11 15:34:53 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <string.h>
#include <stdio.h>
#include <iomanip>

class	Contact
{
	public:
	Contact(void);
	~Contact(void);
	void		set_contact(void);
	std::string	get_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_secret(void);


	private:
	std::string _name;
	std::string _lastname;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

int	check_function(std::string str, int (*f)(int));
#endif

