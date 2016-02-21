/* **********************************
 * Ashon 
 * MyForm
 *
 ************************************/

#include "myform.h"


MyForm::MyForm() {
    // Default constructor
    this->set_title("Loaded Glade form");
    this->set_default_size(500, 300);
}

MyForm::MyForm(const MyForm& orig) {
    // Copy construstor
}

MyForm::~MyForm() {
    // Destructor
}

