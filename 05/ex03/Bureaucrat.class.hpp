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

#ifndef BUREAUCRAT_CLASS_HPP
# define BUREAUCRAT_CLASS_HPP

# include <iostream>
# include "AForm.class.hpp"
# define CONS 0

class AForm;

class Bureaucrat
{

	private:

		const std::string		_name;
		unsigned int			_grade;

	public:

		Bureaucrat( void );
		virtual ~Bureaucrat( void );
		Bureaucrat( std::string name, unsigned int grade );
		Bureaucrat ( const Bureaucrat &obj );
		Bureaucrat & operator=(const Bureaucrat &obj);

		unsigned int	getGrade( void ) const ;
		std::string		getName( void ) const ;
		void			downGrade( void );
		void			upGrade( void );
		void			signForm( AForm & obj );
		void			executeForm( AForm const & form);


	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char * what( void )  const throw();

	};

	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char * what( void )  const throw();
	};

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
