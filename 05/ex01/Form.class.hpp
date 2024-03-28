/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 15:36:19 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS_HPP
# define FORM_CLASS_HPP

# include <iostream>
# include "Bureaucrat.class.hpp"
# define CONS 0

class Bureaucrat;

class Form
{

	private:

		const std::string		_name;
		bool					_signed;
		const unsigned int		_grade_to_sign;
		const unsigned int		_grade_to_exec;

	public:

		Form( void );
		virtual ~Form( void );
		Form( std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec );
		Form ( const Form &obj );
		Form & operator=(const Form &obj);

		void			beSigned( const Bureaucrat &b);
		std::string		getName( void ) const ;
		unsigned int	getGrade_sign( void ) const ;
		unsigned int	getGrade_exec( void ) const ;
		bool			getSigned( void ) const ;

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

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
