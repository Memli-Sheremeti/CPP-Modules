/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:16:41 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/11 15:18:55 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <string>
# include <string.h>
# include "Contact.class.hpp"
# define MAX_CONTACT 3

class PhoneBook
{
	public:
	PhoneBook(void);
	~PhoneBook(void);
	void	ft_add_contact(void);
	void	ft_show_contact(void);
	int		get_nb_contact(void);
	void	set_nb_contact(void);

	private:
	Contact _contacts[MAX_CONTACT];
	int		_nb_of_contact;
};

int	check_index(std::string str, int i);


#endif
