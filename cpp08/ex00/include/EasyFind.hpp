/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:36 by ybong             #+#    #+#             */
/*   Updated: 2022/01/29 18:53:34 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <stdexcept>

template <typename T>
typename T::iterator    easyfind(T &container, int value)
{
    typename T::iterator    res = find(container.begin(), container.end(), value);
    if (res == container.end()) {
        throw std::out_of_range("The value is not found in the container");
    }
    return res;
}

#endif