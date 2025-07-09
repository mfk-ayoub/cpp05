/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:27:53 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/17 16:27:54 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() 
    : _name("shrubberycreationform") , SignGrade(145) , ExecGrade(137) , _target("default")
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
   : _name("shrubberycreationform") , SignGrade(145) , ExecGrade(137) , _target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{

}

ShrubberyCreationForm ShrubberyCreationForm::&operator=(const ShrubberyCreationForm &other)
{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
