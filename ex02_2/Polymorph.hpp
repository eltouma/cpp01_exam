/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:39:18 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:46:31 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell
{
public:
	Polymorph(void);
	~Polymorph(void);
	Polymorph* clone(void) const;
};
