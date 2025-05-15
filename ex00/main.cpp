/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:12:27 by ayel-mou          #+#    #+#             */
/*   Updated: 2025/05/15 16:51:39 by ayel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat b;

    std::cout << b.getName() << std::endl;
    b.Decrement();
    b.Decrement();
    std::cout << b << std::endl;
    try
    {
        Bureaucrat yonko(151,"shanks");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}