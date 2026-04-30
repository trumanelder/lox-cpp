#pragma once

#include <string>
#include <string_view>

namespace lox
{

    class Lox
    {
    public:
        void run_file(std::string_view path);
        void run_prompt();

        // Error subsystem
        static void error(int line, std::string_view message);
        static void report(int line, std::string_view where, std::string_view message);

    private:
        void run(std::string_view source);
        static bool s_had_error;
    };

} // namespace lox