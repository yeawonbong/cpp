/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:02:23 by ybong             #+#    #+#             */
/*   Updated: 2022/01/14 16:02:23 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm(void);

public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &instance);

	virtual void		execute(const Bureaucrat &executor) const;
};

#endif