/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:15:11 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/08/08 02:02:52 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool flag;
        const int SignGrade;
        const int ExecGrade;
    public:
        Form();
        Form(const std::string name);
        Form(const int SignGrade,const int ExecGrade);
        Form(const std::string name,const int SignGrade,const int ExecGrade);
        Form(const Form& other);
        Form& operator=(const Form& other);
        void		beSigned(const Bureaucrat &bureaucrat);
        const std::string GetName() const;
        bool GetFlag() const;
        int GetSignGrade() const;
        int GetExecGrade() const;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        ~Form();

};


std::ostream& operator<<(std::ostream& os, const Form& form);
