# City Builder Simulation

## Overview
The **City Builder Simulation** is a C++ project that simulates the management of a city, allowing players to construct buildings, allocate resources, set tax rates, and monitor citizen satisfaction. The project is designed using several design patterns to ensure flexibility, maintainability, and scalability.

This simulation features:
- Construction of various building types.
- Resource management and taxation.
- Citizen satisfaction management.
- Interaction between city components like buildings, utilities, and transportation.
- A text-based user interface for interacting with the simulation.

## Core Features
- **Construction and Resource Allocation:** Players can construct buildings, allocate resources, and manage city growth.
- **Taxation System:** Adjust tax rates and see their effects on citizen satisfaction and city revenue.
- **Citizen Satisfaction Management:** Monitor and adjust city policies to keep citizens happy.
- **Subsystems:** Buildings, Utilities, Transportation, Citizens, and Government interactions modeled as subsystems.

## Design Patterns Used
This project implements several key design patterns to meet its functional requirements:
1. **Singleton:** Used for resource management (e.g., managing city resources).
2. **Factory:** Responsible for creating various types of buildings.
3. **Observer:** Used to update the citizen satisfaction system when changes occur.
4. **Command:** Supports undo/redo functionality for construction and resource allocation.
5. **Adapter:** Integrates legacy components into the modern system.
6. **Builder:** Constructs complex objects like multi-component buildings.
7. **Mediator:** Manages interactions between various subsystems (e.g., between government and citizens).
8. **Facade:** Provides a simplified interface for managing complex subsystems.
9. **State:** Manages transitions in buildings (e.g., under construction to operational).
10. **Visitor:** Applies operations on a set of elements in the city without changing their classes.

## File Structure
- **System/**: Contains all source files (.h and .cpp) and the Makefile to compile the project.
- **Data/**: Includes any required data files needed to run the program.
- **Report/**: Contains the final project report in PDF format, as well as a Google Docs link to the latest version.
- **Doxygen/**: Auto-generated documentation for classes and methods using Doxygen.

## GUI Research Ideas
- **Initial software idea 1**: https://www.qt.io. Most promising GUI software that has capabilities to integrate C++ code with UI components.  
GUI might be needed. 
- **Initial software idea 2**: making use of a GUI website that makes use C++ code as an API.
- - **Initial software idea 3**: making use of a game engine, that makes use of C++ code as a base.



## Information on the DepartmentUtilities
**Design Pattern used : **Chain of responsibility**
-**Handler** : DepartmentUtilities
-**ConcreteHandler1** : PowerSupply
-**ConcreteHandler2** : waterSupply
-**ConcreteHandler3** : WasteManagement

-A request for resource usage or infrastructure repair might be initiated by the          government
-the Department Utilities has inherited classes like waterSupply, powerSupply and WAsteManagement to represent concreteHandlers within the simulation
-Each department provides services vital to the city's infrastructure: distributing electricity, managing water supply, handling waste, and maintaining infrastructure.
-These concrete handlers altogether ensure that resources are allocated efficiently, infrastructure is maintained, and citizen needs are met to ensure citizen satisfaction
when a request has been made DepartmentUtilities (the base handler), which delegates it to one of its specific departments (PowerSupply, WaterSupply, WasteManagement) which takes care of it.
Chain of responsibility is good for scalability: As the city grows, more utility departments can be added to the chain without changing the structure of existing departments. When a request has been initiated,  the utility systems can dynamically determine the best handler.
