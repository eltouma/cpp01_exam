/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:39:18 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:45:02 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell
{
public:
	Fireball(void);
	~Fireball(void);
	Fireball* clone(void) const;
};
