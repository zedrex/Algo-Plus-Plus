#include <states/array_algorithm_menu.hpp>

#include <state_elements/button.hpp>
#include <state_elements/panel.hpp>

ArrayAlgorithmMenu::ArrayAlgorithmMenu(StateManager *applicationStateManager) : State(applicationStateManager)
{
    // Title
    stateElementList.push_back(new Panel(this->stateManager, 250, 116, 700, 250, "Choose Array Algorithm", 52, sf::Color(0, 0, 0, 0)));

    // Buttons
    stateElementList.push_back(new Button(this->stateManager, 425, 430, 350, 50, "Insertion Sort", Action::ChangeToArrayMenu));
    stateElementList.push_back(new Button(this->stateManager, 425, 490, 350, 50, "Selection Sort", Action::ChangeToArrayMenu));
    stateElementList.push_back(new Button(this->stateManager, 425, 550, 350, 50, "Bubble Sort", Action::ChangeToArrayMenu));
    stateElementList.push_back(new Button(this->stateManager, 425, 610, 350, 50, "Back", Action::ChangeToMainMenu));
}

ArrayAlgorithmMenu::~ArrayAlgorithmMenu()
{
}