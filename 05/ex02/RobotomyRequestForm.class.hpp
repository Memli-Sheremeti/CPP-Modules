/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:36:38 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 18:44:03 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_CLASS_HPP
# define ROBOTOMYREQUESTFORM_CLASS_HPP

# include <iostream>
# include "Bureaucrat.class.hpp"
# define CONS 0

class Bureaucrat;

class RobotomyRequestForm : public AForm
{

	// private:

	// 	const std::string		_name;
	// 	bool					_signed;
	// 	const unsigned int		_grade_to_sign;
	// 	const unsigned int		_grade_to_exec;

	public:

		RobotomyRequestForm( void );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm( std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec );
		RobotomyRequestForm ( const RobotomyRequestForm &obj );
		RobotomyRequestForm & operator=(const RobotomyRequestForm &obj);

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

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& obj);

#endif
