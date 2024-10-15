#ifndef GOTOCOMMAND_H
#define GOTOCOMMAND_H

#include "Citizen.h"
#include "RoadNetWork.h"
#include "Node.h"

#include <iostream>
using namespace std;

/**
 * @class GoToCommand
 * @brief Command class for handling a citizen's movement to a specified destination using a transport strategy.
 * @author LeboGang
 * 
 * The `GoToCommand` class encapsulates the behavior of a citizen traveling from their current position
 * to a designated destination node. It uses the transport strategy defined by the `Citizen` object and 
 * finds the appropriate path using the `RoadNetwork`.
 */
class GoToCommand
{
private:
    Citizen *citizen;          ///< Pointer to the citizen who will execute the command.
    RoadNetwork *roadNetwork;  ///< Pointer to the road network used to find the path.
    Node* destinationNode;     ///< The destination node where the citizen should go.

public:
    /**
     * @brief Executes the command to move the citizen to the specified destination.
     *
     * @details The function retrieves the citizen's current position and checks if the destination 
     * has already been reached. If not, it uses the transport strategy to move the citizen 
     * along a path found in the road network. If no path is available, a message is displayed.
     * 
     * @note destinationNode is set in the constructors of the relevant command.
     * @attention Citizens must have a catalog of addresses, such as Work, Home, and random Entertainment then findPath will do the rest.
     */
    void execute()
    {
        /** @bug Citizen must keep track of its current position .*/
        Node *startNode = citizen->getCurrentLocation(); 

        // Check if already at the destination
        if (startNode == destinationNode)
        {
            std::cout << "Citizen is already at destination." << std::endl;
            return;
        }

        // Retrieve the transport strategy directly from the citizen
        ModeOfTrans *transportStrategy = citizen->getModeOfTransport();

        // Use the road network to find a path and the transport strategy to move the citizen
        std::vector<Node *> path = roadNetwork->findPath(startNode, destinationNode);
        if (!path.empty())
        {
            /** @bug transport strategy invoker needs to be checked*/ 
            transportStrategy->execute(citizen, path); 
            citizen->setCurrentLocation(destinationNode); // Update position after successful move
        }
        else
        {
            std::cout << "No path found from " << startNode->getName()
                      << " to " << destinationNode->getName() << "." << std::endl;
        }
    }
};

#endif // GOTOCOMMAND_H
