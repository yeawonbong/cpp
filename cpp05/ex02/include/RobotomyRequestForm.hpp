/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:02:28 by ybong             #+#    #+#             */
/*   Updated: 2022/01/14 16:02:29 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm(void);

public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	~RobotomyRequestForm(void);

	RobotomyRequestForm &operator=(const RobotomyRequestForm &instance);

	virtual void		execute(const Bureaucrat &executor) const;
};

#endif