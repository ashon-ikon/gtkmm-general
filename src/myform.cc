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

/**
 *
 */
MyForm::MyForm(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refBuilder)
: Gtk::Window(cobject),
  m_refBuilder(refBuilder)
{
    // Default constructor
    this->set_title("Loaded Glade form");
    this->set_default_size(500, 300);
    
}

MyForm::MyForm(const MyForm& orig) {
    // Copy constructor
}

MyForm::~MyForm() {
    // Destructor
}

