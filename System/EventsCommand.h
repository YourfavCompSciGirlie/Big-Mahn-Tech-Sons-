/**
 * @file EventsCommand.h
 * @brief Defines the EventsCommand interface that provides virtual methods for various event-related actions.
 * 
 * This file declares an abstract base class `EventsCommand` which serves as an interface 
 * for handling different events such as pandemics, natural disasters, load-shedding, 
 * festivals, and economic recessions. Each type of event includes various commands 
 * that can be implemented in concrete classes.
 */

#ifndef EVENTSCOMMAND_H
#define EVENTSCOMMAND_H

/**
 * @class EventsCommand
 * @brief Interface for handling city event commands.
 * 
 * The `EventsCommand` class provides an interface with various virtual methods that 
 * correspond to actions for different types of events, including pandemics, natural 
 * disasters, load-shedding, festivals, and recessions. Derived classes implement these methods.
 */


class EventsCommand {
public:

    virtual ~EventsCommand() = default;

    /**
     * @brief will execute/start relevant command
     */
    virtual void execute() = 0;
};

#endif // EVENTSCOMMAND_H
