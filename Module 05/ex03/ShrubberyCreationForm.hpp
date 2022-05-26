#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrForm : public Form
{
	private:
		std::string	target;

	public:
		ShrForm(std::string target);
		ShrForm(ShrForm const &src);

		ShrForm &	operator=(const ShrForm &src);

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;

		~ShrForm(void);
};

#endif