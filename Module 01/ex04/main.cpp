#include "replace.hpp"
#include <string>

std::string	replace(std::string content, std::string to_replace, std::string change)
{
	std::size_t index_word;

	index_word = content.find(to_replace);
	while (index_word != std::string::npos)
	{
		content.erase(index_word, to_replace.size());
		content.insert(index_word, change);
		index_word = content.find(to_replace, index_word + 1);
	}
	return content;
}


void	replace_file_content(data &data)
{
	std::string	buff;

	while (data.ifs.good())
	{
		std::getline(data.ifs, buff);
		buff = replace(buff, data.s1, data.s2);
		data.ofs << buff << std::endl;
	}
}

int	main(int argc, char **argv)
{
	data		data;
	std::string	file_name;

	if (argc == 4)
	{
		file_name = argv[1];
		data.s1 = argv[2];
		data.s2 = argv[3];
		if ((data.s1).size() != 0 && (data.s2).size() != 0 && (file_name).size() != 0)
		{
			data.ifs.open(file_name, std::ifstream::in);
			data.ofs.open(file_name + ".replace", std::ifstream::out);
			if (data.ifs.is_open())
			{
				replace_file_content(data);
				return 0;
			}
		}
	}
	std::cout << "Arguments error" << std::endl;
	return 1;
}