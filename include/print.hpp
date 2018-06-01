/**Вывод строки */
#include <string>
#include <fstream>
#include <iostream>

/**	@brief Вывод строки в поток.
	@param Первый параметр ссылка на строку.Второй параметр ссылка на поток вывода. */
void print(const std::string& text, std::ostream& out = std::cout);
/**	@brief Вывод строки в файл.
	@param Первый параметр ссылка на строку. Второй параметр ссылка на поток вывода в файл. */
void print(const std::string& text, std::ofstream& out);
