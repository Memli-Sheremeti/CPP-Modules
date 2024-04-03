/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:36:38 by mshereme          #+#    #+#             */
/*   Updated: 2024/04/03 14:35:42 by mshereme         ###   ########.fr       */
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

	private:

	const std::string	_target;
	RobotomyRequestForm & operator=(const RobotomyRequestForm &obj);

	public:

		RobotomyRequestForm( void );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm ( const RobotomyRequestForm &obj );

	class NotRobotomized : public std::exception
	{
		public :
		virtual const char * what( void )  const throw();
	};

	void execute( Bureaucrat const & executor ) const;
};

// std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& obj);

#endif
