/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:36 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/18 15:36:19 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_CLASS_HPP
# define AForm_CLASS_HPP

# include <iostream>
# include "Bureaucrat.class.hpp"
# define CONS 0

class Bureaucrat;

class AForm
{

	private:

		const std::string		_name;
		bool					_signed;
		const unsigned int		_grade_to_sign;
		const unsigned int		_grade_to_exec;

	public:

		AForm( void );
		virtual ~AForm( void );
		AForm( std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec );
		AForm ( const AForm &obj );
		AForm & operator=(const AForm &obj);

		void			beSigned( const Bureaucrat &b);
		std::string		getName( void ) const ;
		unsigned int	getGrade_sign( void ) const ;
		unsigned int	getGrade_exec( void ) const ;
		bool			getSigned( void ) const ;
		virtual void	execute(Bureaucrat const & executor) const = 0;

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

std::ostream& operator<<(std::ostream& os, const AForm& obj);

#endif
