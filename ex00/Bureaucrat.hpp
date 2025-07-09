/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 07:04:19 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/16 14:06:47 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>



class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
    Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(const std::string _name);
    Bureaucrat(int grade,const std::string _name);
    Bureaucrat(const Bureaucrat& copy);
    Bureaucrat& operator=(const Bureaucrat& other);
    void Increment();
    void Decrement();
    class GradeTooHighException : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };
    std::string  getName() const;
    int getGrade() const;
    ~Bureaucrat();
};


std::ostream& operator<< (std::ostream& os,const Bureaucrat& b);