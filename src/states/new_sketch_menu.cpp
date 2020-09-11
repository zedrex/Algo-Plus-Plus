#include <states/new_sketch_menu.hpp>

#include <state_elements/button.hpp>
#include <state_elements/panel.hpp>

NewSketchMenu::NewSketchMenu(StateManager *applicationStateManager) : State(applicationStateManager)
{
    // Title
    stateElementList.push_back(new Panel(this->stateManager, 250, 116, 700, 250, "Choose Data Structure", 52, sf::Color(0, 0, 0, 0)));

    // Buttons
    stateElementList.push_back(new Button(this->stateManager, 425, 430, 350, 50, "Array", Action::ChangeToArrayAlgorithmMenu));
    stateElementList.push_back(new Button(this->stateManager, 425, 490, 350, 50, "Graph", Action::ChangeToGraphAlgorithmMenu));
    stateElementList.push_back(new Button(this->stateManager, 425, 550, 350, 50, "Grid", Action::Grid));
    stateElementList.push_back(new Button(this->stateManager, 425, 610, 350, 50, "Back", Action::ChangeToMainMenu));
}

NewSketchMenu::~NewSketchMenu() {}