/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:10:52 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 17:04:24 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ASpell.hpp"

class	Fireball : public ASpell
{
public:
	Fireball(void);
	~Fireball(void);
	Fireball* clone() const;
};
