/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:39:18 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:00:55 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
public:
	Dummy(void);
	~Dummy(void);
	Dummy* clone(void) const;
};
