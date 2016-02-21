/* **********************************
 * Ashon Form
 *
 ************************************/
#include <gtkmm.h>
#include <iostream>
#include <cstdlib>
#include "myform.h"

using namespace std;

#define UI_PATH "glade/simple_ui.glade"

int
main(int argc, char * argv[]) {
    Glib::RefPtr<Gkt::Application> app = Gtk::Application::create(
        argc, argv, "com.ashon-associates.com.glad-form"
    );
    
    Gtk::Builder builder = Gtk::Builder::create();
    
    try {
        builder->add_from_file(UI_PATH);
        
    } catch (Glib::FileError & ex) {
        cout << "Some file error occured: " << ex.what() << endl;
        return EXIT_FAILURE;
    } catch (Glib::MarkupError & ex) {
        cout << "Markup error occured: " << ex.what() << endl;
        return EXIT_FAILURE;
    } catch (Glib::BuilderError & ex) {
        cout << "Builder error occured: " << ex.what() << endl;
        return EXIT_FAILURE;
    }   
    
    MyForm *pMyForm = nullptr;
    int status = EXIT_FAILURE;
    
    bilder->get_widget("NameWindow", pMyForm);
    
    if (pMyForm) {
        pMyForm->show_all();
        
        status = app->run(pMyForm);
    } 
    
    delete pMyForm;
    
    return 0;
}
