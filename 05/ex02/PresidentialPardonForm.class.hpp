/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:36:38 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 18:37:28 by mshereme         ###   ########.fr       */
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

	// private:

	// 	const std::string		_name;
	// 	bool					_signed;
	// 	const unsigned int		_grade_to_sign;
	// 	const unsigned int		_grade_to_exec;

	public:

		PresidentialPardonForm( void );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm( std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec );
		PresidentialPardonForm ( const PresidentialPardonForm &obj );
		PresidentialPardonForm & operator=(const PresidentialPardonForm &obj);

	// 	void			beSigned( const Bureaucrat &b);
	// 	std::string		getName( void ) const ;
	// 	unsigned int	getGrade_sign( void ) const ;
	// 	unsigned int	getGrade_exec( void ) const ;
	// 	bool			getSigned( void ) const ;

	// class GradeTooHighException : public std::exception
	// {
	// 	public :

	// 	virtual const char * what( void )  const throw();

	// };

	// class GradeTooLowException : public std::exception
	// {
	// 	public :
	// 	virtual const char * what( void )  const throw();
	// };
};

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& obj);

#endif
