/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:15:09 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/08/08 02:03:42 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : name("baggi"), flag(false), SignGrade(1), ExecGrade(1)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


Form::Form(const std::string name)
    : name(name), flag(false), SignGrade(1), ExecGrade(1)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Form::Form(const int SignGrade, const int ExecGrade)
    : name("baggi"), flag(false), SignGrade(SignGrade), ExecGrade(ExecGrade)
{
    if (SignGrade < 1 || ExecGrade < 1)
        throw GradeTooHighException();
    if (SignGrade > 150 || ExecGrade > 150)
        throw GradeTooLowException();
}

Form::Form(const std::string name, const int SignGrade, const int ExecGrade)
    : name(name), flag(false), SignGrade(SignGrade), ExecGrade(ExecGrade)
{
    if (SignGrade < 1 || ExecGrade < 1)
        throw GradeTooHighException();
    if (SignGrade > 150 || ExecGrade > 150)
        throw GradeTooLowException();
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Form::Form(const Form& other) 
    : name(other.name), flag(other.flag), SignGrade(other.SignGrade), ExecGrade(other.ExecGrade)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Form& Form::operator=(const Form& other)
{
    if (this != &other) 
    {
        this->flag = other.flag;
    }
    return *this;
}

const std::string Form::GetName() const
{
    return (name);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


bool Form::GetFlag() const
{
    return (flag);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int Form::GetSignGrade() const
{
    return (SignGrade);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


int Form::GetExecGrade() const
{
    return (ExecGrade);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void		Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade()  <= SignGrade)
        flag = true;
    else
        throw(GradeTooLowException());
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high to sign the form");
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low to sign the form");
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form \"" << form.GetName() << "\", ";
    os << "Grade Sign is : " << form.GetSignGrade() << ", "
       << "Grade Execute is : " << form.GetExecGrade();

    return (os);
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


Form::~Form()
{
}
