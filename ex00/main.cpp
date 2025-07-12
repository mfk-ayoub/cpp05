/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:12:27 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/07/12 05:06:23 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    {
        try
        {
            Bureaucrat b;
            b.Decrement();
            b.Decrement();
            std::cout << b << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }   
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`
    {
    try
        {
            Bureaucrat yonko(0,"shanks");
            std::cout << yonko << std::endl;

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
     //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`
    {
    try
        {
            Bureaucrat yonko(151,"baggi");
            std::cout << yonko << std::endl;

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`
    {
    try
        {
            Bureaucrat yonko(2,"kaido");
            yonko.Increment();
            std::cout << yonko << std::endl;
          
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`
    Bureaucrat yonko(1);
    yonko.Increment();
    std::cout << yonko << std::endl;
    try
    {
        yonko.Increment();

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}