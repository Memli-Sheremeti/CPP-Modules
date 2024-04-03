/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:36:38 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 14:35:34 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_CLASS_HPP
# define PRESIDENTIALPARDONFORM_CLASS_HPP

# include <iostream>
# include "Bureaucrat.class.hpp"
# define CONS 0

class Bureaucrat;

class PresidentialPardonForm : public AForm
{

	private:

		const std::string		_target;
		PresidentialPardonForm & operator=(const PresidentialPardonForm &obj);

	public:

		PresidentialPardonForm( void );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm ( const PresidentialPardonForm &obj );

		void	execute( Bureaucrat const & executor ) const;
};

#endif
