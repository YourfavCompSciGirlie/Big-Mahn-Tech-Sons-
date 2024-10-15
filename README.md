City Builder Simulation
Overview
The City Builder Simulation is a C++ project designed to simulate the growth and management of a city. Players can construct buildings, manage resources, set taxes, and monitor citizen well-being. This project integrates several design patterns to ensure scalability, maintainability, and extensibility as the city evolves. It simulates complex interactions between buildings, citizens, utilities, transportation systems, and government departments.

This simulation features:

Construction of various building types.
Resource management and taxation.
Citizen satisfaction monitoring and management.
Interaction between city components like buildings, utilities, and transportation.
A text-based user interface for interacting with the simulation.
Core Features
Dynamic Building Creation: Construct different types of buildings using a Factory Method.
Resource and Infrastructure Management: Control essential utilities like water, power, and waste management.
Transportation Network: Simulate various transportation modes within the city.
Citizen Lifecycle Management: Track and manage state transitions of citizens (e.g., child → adult → pensioner).
Taxation System and Budget Management: Set tax rates and allocate resources effectively to manage city finances.
Event Handling and Crisis Management: Handle events like natural disasters, pandemics, and load-shedding.
Seamless Coordination Between Departments: Use a Mediator pattern to streamline communication between different government departments.
Design Patterns Used
This project integrates multiple design patterns to create a scalable and maintainable system. Below is a detailed explanation of each pattern, how it is used, and why it fits the system’s requirements.

1. Chain of Responsibility
Use Case: Infrastructure Management

Participants:

Handler: DepartmentUtilities
ConcreteHandlers: PowerSupply, WaterSupply, WasteManagement
How it Works:

When the city experiences an infrastructure issue (e.g., a power outage), the request is passed down a chain of handlers. Each handler checks if it can handle the request. If it can’t, it forwards the request to the next handler in the chain.
Why it’s Used:

This pattern allows flexible resource management by decoupling the request for services from specific departments. New utility departments can be added to the chain without modifying existing code.
2. Factory Method
Use Case: Building Creation

How it Works:

The Factory Method provides an interface for creating objects (buildings) without specifying the exact class of object being created. Different types of buildings (e.g., ResidentialBuilding, CommercialBuilding) are constructed through a factory.
Why it’s Used:

This pattern adds flexibility to the code by separating object creation logic from the main simulation. It ensures that new types of buildings can be added without changing the existing code.
3. Observer
Use Case: Monitoring Citizen and Building Status

Participants:

Subject: Building, Citizen
Observer: DepartmentOfPR
How it Works:

When a building or citizen’s state changes (e.g., a building becomes overcrowded), the observers (PR department) are notified. The observers then respond to these changes (e.g., by increasing public campaigns to manage satisfaction).
Why it’s Used:

The Observer pattern ensures real-time monitoring of important state changes, allowing the PR department to respond quickly to any emerging issues.
4. Command
Use Case: Event Management

Participants:

Command Interface: EventsCommand
Concrete Commands:
PandemicCommand: Reduces citizen health.
NaturalDisasterCommand: Damages buildings.
LoadsheddingCommand: Affects utilities.
How it Works:

Each event is encapsulated as a command object. These commands can be queued, scheduled, or triggered dynamically.
Why it’s Used:

This pattern decouples the event logic from the simulation, making it easy to add new events without altering the existing system.
5. Mediator
Use Case: Communication Between Government Departments

Participants:

Mediator: DepartmentOfPR
Colleagues: HousingDept, FinanceDept, UtilityDept, TransportDept
How it Works:

The Mediator encapsulates communication logic between departments. For example, if the Finance Department needs to allocate a budget for housing, the mediator coordinates the request.
Why it’s Used:

This pattern reduces direct dependencies between departments, promoting a loose-coupling design.
6. Facade
Use Case: Government Control

How it Works:

The Government class acts as a Facade that provides a unified interface to interact with various departments. Players interact with the government through this facade, which manages complex operations behind the scenes.
Why it’s Used:

This pattern simplifies the interface for interacting with the city’s departments, making the system easier to use and maintain.
7. State
Use Case: Citizen Lifecycle Management

Participants:

Context: Citizen
States: ChildState, AdultState, PensionerState
How it Works:

As citizens grow older, they transition between different states. Each state affects their role in the city (e.g., only adults can work and pay taxes).
Why it’s Used:

The State pattern ensures that citizen behavior changes dynamically based on their lifecycle stage.
8. Visitor
Use Case: Taxation System

Participants:

Visitor Interface: TaxManager
Concrete Visitors: ResidentialTaxVisitor, CommercialTaxVisitor
Elements: ResidentialBuilding, CommercialBuilding
How it Works:

The Visitor pattern allows different taxation operations to be performed on each type of building without modifying their structure.
Why it’s Used:

This pattern makes it easy to extend the taxation system without changing the existing code for buildings.
9. Strategy
Use Case: Transportation Modes

Participants:

Context: TransportSystem
Strategies: BusStrategy, TaxiStrategy, TrainStrategy
How it Works:

Players can select different transportation strategies to travel within the city. The selected strategy determines how fast and efficiently citizens move.
Why it’s Used:

This pattern adds flexibility by allowing dynamic switching between different transportation modes.
10. Iterator
Use Case: Traversing the City Graph

How it Works:

The city is modeled as a graph of buildings connected by roads. The Iterator pattern enables traversal through this graph in a structured manner.
Why it’s Used:

This pattern simplifies traversing complex networks, ensuring smooth travel within the city.
File Structure
System/: Contains all source files (.h and .cpp) and the Makefile to compile the project.
Data/: Includes any required data files needed to run the program.
Report/: Contains the final project report in PDF format and a Google Docs link to the latest version.
Doxygen/: Auto-generated documentation for classes and methods using Doxygen.
GUI Research Ideas
Option 1: Qt Framework – A powerful framework for creating graphical user interfaces integrated with C++.
Option 2: Use C++ APIs with a Web Frontend – Develop the frontend using HTML5/JavaScript.
Option 3: Use a Game Engine (like Unreal Engine or Godot) – These engines allow C++ integration for building interactive simulations.
How to Build and Run
Clone the repository:
bash
Copy code
git clone <repository_url>
cd CityBuilderSimulation
Build the project using the Makefile:
bash
Copy code
make
Run the simulation:
bash
Copy code
./CityBuilderSimulation
Conclusion
The City Builder Simulation offers a fun, educational experience that challenges players to manage resources, coordinate departments, and handle crises effectively. With multiple design patterns ensuring scalability, this project serves as an excellent example of software architecture in action.
