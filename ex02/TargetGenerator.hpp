/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:02:50 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 17:58:26 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <vector>
# include "ASpell.hpp"
# include "ATarget.hpp"

class TargetGenerator {
	std::string	_name;
//	std::string	_title;
	std::vector<ATarget*> vect;

	TargetGenerator(const TargetGenerator & obj);
	TargetGenerator& operator=(const TargetGenerator & rhs);

public:
/*
	const std::string & getName() const;
	const std::string & getTitle() const;
	void	setTitle(const std::string & title);
	TargetGenerator(const std::string & name, const std::string & title);
	void	introduce(void) const;
*/
	TargetGenerator(void); 
	void	learnTargetType(ATarget *spell);
	void	forgetTargetType(const std::string & spell_name);
	ATarget*	createTarget(const std::string & spell_name); //, const ATarget &target);
	~TargetGenerator(void);
};
