#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PreForm : public Form
{
	private:
		std::string	target;

	public:
		PreForm(std::string target);
		PreForm(PreForm const &src);

		PreForm &	operator=(const PreForm &src);

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;

		~PreForm(void);
};

#endif