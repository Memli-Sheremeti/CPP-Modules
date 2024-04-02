/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <mshereme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:36:38 by mshereme          #+#    #+#             */
/*   Updated: 2024/03/21 18:37:28 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_CLASS_HPP
# define ShrubberyCreationForm_CLASS_HPP

# include <iostream>
# include "Bureaucrat.class.hpp"
# define CONS 0

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{

	private:

		const std::string		_target;

	public:

		ShrubberyCreationForm( void );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string & target);
		ShrubberyCreationForm ( const ShrubberyCreationForm &obj );
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &obj);

		void	execute( Bureaucrat const & executor );
};

#endif
