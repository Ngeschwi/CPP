#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobForm : public Form
{
	private:
		std::string	target;

	public:
		RobForm(std::string target);
		RobForm(RobForm const &src);

		RobForm &	operator=(const RobForm &src);

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;

		~RobForm(void);
};

#endif