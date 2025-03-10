/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:39:18 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 22:48:54 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget
{
public:
	BrickWall(void);
	~BrickWall(void);
	BrickWall* clone(void) const;
};
