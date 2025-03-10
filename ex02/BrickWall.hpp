/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:10:52 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 17:19:04 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ATarget.hpp"

class	BrickWall : public ATarget
{
public:
	BrickWall(void);
	~BrickWall(void);
	BrickWall* clone() const;
};
