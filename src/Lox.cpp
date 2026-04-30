#include "Lox.hpp"

namespace lox
{

    void Lox::run_file(std::string_view path) {}
    void Lox::run_prompt()
    {
        while (true)
        {
            std::cout << ">";
            std::string line;
            if (!std::getline(std::cin, line))
                break;
            run(line);
        }
    }

    // Error subsystem
    void Lox::error(int line, std::string_view message) {}
    void Lox::report(int line, std::string_view where, std::string_view message) {}

    void Lox::run(std::string_view source) {}
    bool Lox::s_had_error = false;

} // namespace lox