/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:27:53 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/12 11:45:43 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() 
    : AForm("shrubberycreationform" ,145 , 137) , _target("default")
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
   : AForm("shrubberycreationform" ,145 , 137) , _target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : AForm(other) , _target(other._target)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
    {
        AForm::operator=(other);
    }
    return *this;
}

const std::string&  ShrubberyCreationForm::GetTarget() const
{
    return (_target);
}
    

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    (void)executor;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
