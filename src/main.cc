/* **********************************
 * Ashon Form
 *
 ************************************/
#include <gtkmm.h>
#include <iostream>
#include <cstdlib>
#include "myform.h"

using std::cout;
using std::cin;
using std::endl;

#define UI_PATH "glade/simple_ui.glade"

int
main(int argc, char * argv[]) {
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(
        argc, argv, "com.ashon-associates.com.glad-form"
    );
    
    Glib::RefPtr<Gtk::Builder> builder = Gtk::Builder::create();
    
    try {
        builder->add_from_file(UI_PATH);
        
    } catch (Glib::FileError & ex) {
        cout << "Some file error occurred: " << ex.what() << endl;
        return EXIT_FAILURE;
    } catch (Glib::MarkupError & ex) {
        cout << "Markup error occurred: " << ex.what() << endl;
        return EXIT_FAILURE;
    } catch (Gtk::BuilderError & ex) {
        cout << "Builder error occurred: " << ex.what() << endl;
        return EXIT_FAILURE;
    }   
    
    MyForm *pMyForm = nullptr;
    int status = EXIT_FAILURE;
    
    builder->get_widget_derived("NameWindow", pMyForm);
    
    if (pMyForm) {
        cout << "Loaded Form object successfully!" << endl;
        pMyForm->show_all_children();
        
        status = app->run(*pMyForm);
    } else {
        cout << "Something wild happened!" << endl;
        status = EXIT_FAILURE;
    }
    
    delete pMyForm;
    
    return status;
}
