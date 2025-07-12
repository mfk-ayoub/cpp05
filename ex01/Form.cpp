/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:15:09 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/12 11:21:57 by ayel-mou         ###   ########.fr       */
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
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


Form::Form(const std::string name, const int SignGrade, const int ExecGrade)
    : name(name), flag(false), SignGrade(SignGrade), ExecGrade(ExecGrade)
{
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

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
