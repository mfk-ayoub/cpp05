/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 07:04:19 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/15 11:18:02 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
    Bureaucrat();
    Bureaucrat(int _grade);
    Bureaucrat(const std::string _name);
    Bureaucrat(int _grade,const std::string _name);
    void Increment();
    void Decrement();
    std::string  getName() const;
    int getGrade() const;
    ~Bureaucrat();
};