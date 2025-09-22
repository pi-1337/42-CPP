
#include "Harl.hpp"

typedef void (Harl::*HarlReactions)(void);

void    Harl::debug( void )
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    HarlReactions   funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string     levels[] = {"debug", "info", "warning", "error"};

    for (size_t i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*funcs[i])();
            return ;
        }
    }
    std::cout << "Level Unknwon" << std::endl;
}


