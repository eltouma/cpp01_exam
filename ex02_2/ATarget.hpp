/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:17:58 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 21:59:55 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
	std::string	type;
	ATarget(void);
	ATarget(const ATarget & obj);
	ATarget& operator=(const ATarget & rhs);

public:
	const std::string & getType() const;
	ATarget(const std::string & type);
	virtual ATarget* clone() const = 0;

	void	getHitBySpell(const ASpell & spell) const;
	virtual ~ATarget(void);
};
