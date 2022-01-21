/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:36 by ybong             #+#    #+#             */
/*   Updated: 2022/01/21 20:53:36 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

# include <iostream>
# include <stdexcept>
# include <vector>

class   Span
{

private:

    Span();
    std::vector<int> numbers;

public:

    Span(unsigned int n);
    Span(const Span &src);
    ~Span();

    Span &operator=(const Span &src);

    void    addNumber(int num);
    int     shortestSpan();
    int     longestSpan();

    static bool verbose;

};

// template <typename T>
// typename T::iterator    easyfind(T &container, int value)
// {
//     typename T::iterator    res = find(container.begin(), container.end(), value);
//     if (res == container.end()) {
//         throw std::out_of_range("The value is not found in the container");
//     }
//     return res;
// }

#endif