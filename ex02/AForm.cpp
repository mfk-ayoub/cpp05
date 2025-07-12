/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:15:09 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/12 11:28:47 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
    : name("baggi"), flag(false), SignGrade(1), ExecGrade(1)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


AForm::AForm(const std::string name)
    : name(name), flag(false), SignGrade(1), ExecGrade(1)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AForm::AForm(const int SignGrade, const int ExecGrade)
    : name("baggi"), flag(false), SignGrade(SignGrade), ExecGrade(ExecGrade)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


AForm::AForm(const std::string name, const int SignGrade, const int ExecGrade)
    : name(name), flag(false), SignGrade(SignGrade), ExecGrade(ExecGrade)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->flag = other.GetFlag();
    }
    return *this;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

const std::string AForm::GetName()
{
    return (name);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


bool AForm::GetFlag() const
{
    return (flag);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int AForm::GetSignGrade() const
{
    return (SignGrade);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int AForm::GetExecGrade() const
{
    return (ExecGrade);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void		AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade()  <= SignGrade)
        flag = true;
    else
        throw(GradeTooLowException());
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too high to sign the Aform");
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too low to sign the Aform");
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AForm::~AForm()
{
}
