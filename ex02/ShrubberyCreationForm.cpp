/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:27:53 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/27 05:43:59 by ayel-mou         ###   ########.fr       */
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
    return (*this);
}

const std::string&  ShrubberyCreationForm::GetTarget() const
{
    return (_target);
}
    

void ShrubberyCreationForm::executeAction() const
{
    std::string filename = _target + "_shrubbery"; 
    std::ofstream outfile( filename.c_str());
    if (!outfile.is_open())
        throw std::runtime_error("Could not create file");
    
    outfile << "    *    \n";
    outfile << "   ***   \n";
    outfile << "  *****  \n";
    outfile << " ******* \n";
    outfile << "   |||   \n";   
    outfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
