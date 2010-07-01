#ifndef COMPILER_EXCEPTION_H_INCLUDED
#define COMPILER_EXCEPTION_H_INCLUDED

#include <exception>

namespace Compiler
{
    /// \brief Exception: Error while parsing the source

    class SourceException : public std::exception
    {
            virtual const char *what() const throw() { return "compile error";} 
            ///< Return error message
    };

    /// \brief Exception: File error

    class FileException : public SourceException
    {
            virtual const char *what() const throw() { return "can't read file"; }
            ///< Return error message
    };

    /// \brief Exception: EOF condition encountered

    class EOFException : public SourceException
    {
            ///< Return error message
    };
}

#endif