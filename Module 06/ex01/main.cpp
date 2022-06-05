#include "Serialisation.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<std::uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main()
{
	Data *data = new Data;
	data->value_data = 48;
	uintptr_t	raw;

	raw = serialize(data);
	Data *ptr_data = deserialize(raw);
	
	std::cout << "pointeur d'origine    : " << data << std::endl;
	std::cout << "sortie de deserialize : " << ptr_data << std::endl;
	std::cout << "---" << std::endl;
	std::cout << "pointeur d'origine : " << data->value_data << std::endl;
	std::cout << "sortie de deserialize : " << ptr_data->value_data << std::endl;

	delete data;
	return 0;
}