/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:39:18 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 21:53:48 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell
{
public:
	Fwoosh(void);
	~Fwoosh(void);
	Fwoosh* clone(void) const;
};
