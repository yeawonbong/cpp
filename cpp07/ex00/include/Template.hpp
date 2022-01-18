/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:08:24 by ybong             #+#    #+#             */
/*   Updated: 2022/01/18 16:08:25 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T>
void	swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
};

template <typename T>
T	min(T a, T b) {
	return (a < b? a : b);
}

template <typename T>
T	max(T a, T b) {
	return (a > b? a : b);
}

#endif