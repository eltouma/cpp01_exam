/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:10:52 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 16:40:30 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ASpell.hpp"

class	Fwoosh : public ASpell
{
public:
	Fwoosh(void);
	~Fwoosh(void);
	Fwoosh* clone() const;
};
