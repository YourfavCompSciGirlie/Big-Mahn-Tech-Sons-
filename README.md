# City Builder Simulation

## Overview
The **City Builder Simulation** is a C++ project designed to simulate the growth and management of a city. Players can construct buildings, manage resources, set taxes, and monitor citizen well-being. This project integrates several design patterns to ensure scalability, maintainability, and extensibility as the city evolves. It simulates complex interactions between buildings, citizens, utilities, transportation systems, and government departments.

This simulation features:
- Construction of various building types.
- Resource management and taxation.
- Citizen satisfaction monitoring and management.
- Interaction between city components like buildings, utilities, and transportation.
- A text-based user interface for interacting with the simulation.

## Core Features
- **Dynamic Building Creation:** Construct different types of buildings using a Factory Method.  
- **Resource and Infrastructure Management:** Control essential utilities like water, power, and waste management.  
- **Transportation Network:** Simulate various transportation modes within the city.  
- **Citizen Lifecycle Management:** Track and manage state transitions of citizens (e.g., child → adult → pensioner).  
- **Taxation System and Budget Management:** Set tax rates and allocate resources effectively to manage city finances.  
- **Event Handling and Crisis Management:** Handle events like natural disasters, pandemics, and load-shedding.  
- **Seamless Coordination Between Departments:** Use a Mediator pattern to streamline communication between different government departments.  

## Design Patterns Used
This project integrates multiple design patterns to create a scalable and maintainable system. Below is a detailed explanation of each pattern, how it is used, and why it fits the system’s requirements.

### 1. Chain of Responsibility
**Use Case:** Infrastructure Management  
**Participants:**
- **Handler:** `DepartmentUtilities`
- **ConcreteHandlers:** `PowerSupply`, `WaterSupply`, `WasteManagement`

**How it Works:**  
When the city experiences an infrastructure issue (e.g., a power outage), the request is passed down a chain of handlers. Each handler checks if it can handle the request. If it can’t, it forwards the request to the next handler in the chain.  

**Why it’s Used:**  
This pattern allows flexible resource management by decoupling service requests from specific departments. New utility departments can be added to the chain without modifying existing code.

---

### 2. Factory Method
**Use Case:** Building Creation  
**Participants:**
- **Creator:** `BuildingCreator`
- **ConcreteCreators:** `ResidentialBuildingCreator`, `CommercialBuildingCreator`, `IndustrialBuildingCreator`, `LandmarkBuildingCreator`
- **Product:** `Building`
- **ConcreteProduct:** `House`, `Apartment`, `Estate`, `Shop`, `Office`, `Mall`,`School`, `Hospital`, `Warehouse`, `Factory`, `Airport`, `TrainStation`, `Park`, `Monument`, `Museum`
- **Client:** `HousingDept`

**How it Works:**  
The Factory Method provides an interface for creating objects (buildings) without specifying the exact class of object being created. Different types of buildings (e.g., `ResidentialBuilding`, `CommercialBuilding`) are constructed through a factory.

**Why it’s Used:**  
This pattern adds flexibility by separating object creation logic from the main simulation, ensuring new building types can be added without modifying existing code.

---

### 3. Observer
**Use Case:** Monitoring Citizen and Building Status  
**Participants:**
- **Subject:** `Building`, `Citizen`
- **Observer:** `DepartmentOfPR`

**How it Works:**  
When a building or citizen’s state changes (e.g., overcrowding), observers (e.g., the PR department) are notified to respond accordingly (e.g., launching campaigns to manage satisfaction).

**Why it’s Used:**  
The Observer pattern ensures real-time monitoring of important state changes, enabling quick responses to emerging issues.

---

### 4. Command
**Use Case:** Event Management  
**Participants:**
- **Command Interface:** `EventsCommand`
- **Concrete Commands:** 
  - `PandemicCommand`: Reduces citizen health.
  - `NaturalDisasterCommand`: Damages buildings.
  - `LoadsheddingCommand`: Affects utilities.

**How it Works:**  
Each event is encapsulated as a command object, which can be queued, scheduled, or triggered dynamically.

**Why it’s Used:**  
This pattern decouples event logic from the simulation, making it easy to add new events without altering the existing system.

---

### 5. Mediator
**Use Case:** Communication Between Government Departments  
**Participants:**
- **Mediator:** `DepartmentOfPR`
- **Colleagues:** `HousingDept`, `FinanceDept`, `UtilityDept`, `TransportDept`

**How it Works:**  
The Mediator encapsulates communication logic between departments. For example, if the Finance Department needs to allocate a budget for housing, the mediator coordinates the request.

**Why it’s Used:**  
This pattern reduces direct dependencies between departments, promoting a loosely-coupled design.

---

### 6. Facade
**Use Case:** Government Control  

**How it Works:**  
The `Government` class acts as a Facade, providing a unified interface to interact with various departments. Players interact with the government through this facade, which manages complex operations behind the scenes.

**Why it’s Used:**  
This pattern simplifies interactions with city departments, making the system easier to use and maintain.

---

### 7. State
**Use Case:** Citizen Lifecycle Management  
**Participants:**
- **Context:** `Citizen`
- **States:** `ChildState`, `AdultState`, `PensionerState`

**How it Works:**  
As citizens grow older, they transition between different states, affecting their role in the city (e.g., only adults can work and pay taxes).

**Why it’s Used:**  
The State pattern ensures citizen behavior changes dynamically based on lifecycle stages.

---

### 8. Visitor
**Use Case:** Taxation System  
**Participants:**
- **Visitor Interface:** `TaxManager`
- **Concrete Visitors:** `ResidentialTaxVisitor`, `CommercialTaxVisitor`
- **Elements:** `ResidentialBuilding`, `CommercialBuilding`

**How it Works:**  
The Visitor pattern allows different taxation operations to be performed on each building type without modifying the buildings' structure.

**Why it’s Used:**  
This pattern makes it easy to extend the taxation system without changing the code for buildings.

---

### 9. Strategy
**Use Case:** Transportation Modes  
**Participants:**
- **Context:** `TransportSystem`
- **Strategies:** `BusStrategy`, `TaxiStrategy`, `TrainStrategy`

**How it Works:**  
Players select different transportation strategies to travel within the city. The selected strategy determines the efficiency of citizen movement.

**Why it’s Used:**  
This pattern adds flexibility by allowing dynamic switching between transportation modes.

---

### 10. Iterator
**Use Case:** Traversing the City Graph  

**How it Works:**  
The city is modeled as a graph of buildings connected by roads. The Iterator pattern enables traversal through this graph.

**Why it’s Used:**  
This pattern simplifies traversal through complex networks, ensuring smooth travel within the city.

---

## File Structure
- **System/**: Contains all source files (.h and .cpp) and the Makefile to compile the project.
- **Data/**: Includes required data files to run the program.
- **Report/**: Contains the final project report in PDF format and a Google Docs link to the latest version.
- **Doxygen/**: Auto-generated documentation for classes and methods using Doxygen.

## GUI Research Ideas
- **Option 1:** Qt Framework – A powerful framework for creating GUIs integrated with C++.  
- **Option 2:** Use C++ APIs with a Web Frontend – Develop the frontend using HTML5/JavaScript.  
- **Option 3:** Use a Game Engine (like Unreal Engine or Godot) – These engines allow C++ integration for interactive simulations.

---

## How to Build and Run
1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd CityBuilderSimulation
   
2. Build and run the project using the Makefile:
 ```bash
make run
