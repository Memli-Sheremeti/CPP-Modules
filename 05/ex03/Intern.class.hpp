/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 15:36:19 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP
# define INTERN_CLASS_HPP

# include <iostream>
# include "AForm.class.hpp"
# define CONS 0

class AForm;

class Intern
{
	private:

		Intern ( const Intern &obj );
		Intern & operator=(const Intern &obj);

	public:

		Intern( void );
		virtual ~Intern( void );

		AForm *RobotomyRequestForm_creation( std::string target ) const;
		AForm *PresidentialPardonForm_creation(std::string target) const;
		AForm *ShrubberyCreationForm_creation(std::string target) const;
		AForm * makeForm( std::string name_form, std::string target_form );

	class	NotaForm : public std::exception
	{
		public :
		virtual const char * what( void ) const throw();
	};
};

#endif
