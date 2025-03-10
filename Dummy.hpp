# pragma once
# include "ATarget.hpp"

class	Dummy : public ATarget
{
public:
	Dummy(void);
	virtual ~Dummy(void);
	virtual Dummy* clone() const;
};
