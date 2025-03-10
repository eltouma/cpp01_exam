/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:17:58 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 23:19:49 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <vector>

#include "ATarget.hpp"

class TargetGenerator
{
	std::string	name;
	std::string	title;
	std::vector<ATarget*>	vect;
	TargetGenerator(const TargetGenerator & obj);
	TargetGenerator& operator=(const TargetGenerator & rhs);

public:
	TargetGenerator(void);
	const std::string & getName() const;
	const std::string & getTitle() const;
	TargetGenerator(const std::string & name, const std::string & title);

	void	learnTargetType(ATarget* target);
	void	forgetTargetTYpe(const std::string &target_name);
	ATarget*	createTarget(const std::string &target_name);
	~TargetGenerator(void);
};
