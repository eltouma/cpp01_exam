/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:23:25 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 16:40:49 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget 
{
protected:
	std::string	_type;
	ATarget(void); 
	ATarget(const ATarget & obj);
	ATarget& operator=(const ATarget & rhs);

public:
	const std::string & getType() const;
	virtual ATarget* clone() const = 0;
	ATarget(const std::string & type);
	void	getHitBySpell(const ASpell & spell) const;
	virtual ~ATarget(void);
};
