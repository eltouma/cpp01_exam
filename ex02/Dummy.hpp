/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:10:52 by eltouma           #+#    #+#             */
/*   Updated: 2025/03/10 16:42:09 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ATarget.hpp"

class	Dummy : public ATarget
{
public:
	Dummy(void);
	~Dummy(void);
	Dummy* clone() const;
};
