/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:15:09 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/08/08 02:07:42 by ayel-mou         ###   ########.fr       */
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
    if (SignGrade < 1 || ExecGrade < 1)
        throw GradeTooHighException();
    if (SignGrade > 150 || ExecGrade > 150)
        throw GradeTooLowException();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AForm::AForm(const std::string name, const int SignGrade, const int ExecGrade)
    : name(name), flag(false), SignGrade(SignGrade), ExecGrade(ExecGrade)
{
    if (SignGrade < 1 || ExecGrade < 1)
        throw GradeTooHighException();
    if (SignGrade > 150 || ExecGrade > 150)
        throw GradeTooLowException();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
AForm::AForm(const AForm& other) 
    : name(other.name), flag(other.flag), SignGrade(other.SignGrade), ExecGrade(other.ExecGrade)
{
}
//~~~~~~~~~~~~~~~~~~~~

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->flag = other.GetFlag();
    }
    return *this;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

const std::string AForm::GetName() const
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

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "Form \"" << form.GetName() << "\", ";
    os << "Grade Sign is : " << form.GetSignGrade() << ", "
    << "Grade Execute is : " << form.GetExecGrade();
    
    return (os);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


void AForm::execute(const Bureaucrat &executor) const
{
    if (!flag)
        throw GradeTooLowException();
    if (executor.getGrade() > ExecGrade)
        throw GradeTooLowException();
    executeAction();
}
//~~~~~~~~~~~~~~~~~~~~~~~

AForm::~AForm()
{
}