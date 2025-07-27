/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:15:11 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/27 05:53:24 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool flag;
        const int SignGrade;
        const int ExecGrade;
    public:
        AForm();
        AForm(const std::string name);
        AForm(const int SignGrade,const int ExecGrade);
        AForm(const std::string name,const int SignGrade,const int ExecGrade);
        AForm &operator=(const AForm &other); 
        void		beSigned(const Bureaucrat &bureaucrat);
        const std::string GetName() const;
        bool GetFlag() const; 
        int GetSignGrade() const;
        int GetExecGrade() const;
        virtual void executeAction() const = 0;
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
        void execute(Bureaucrat const &executor) const;
        virtual ~AForm();

};

std::ostream& operator<<(std::ostream& os, const AForm& form);

