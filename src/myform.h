/* **********************************
 * Ashon 
 * MyForm
 *
 ************************************/

#ifndef __MYFORM_H__
#define __MYFORM_H__

// GTKMM Stuff
#include <gtkmm/window.h>
#include <gtkmm/object.h>
#include <gtkmm/builder.h>
#include <glibmm/refptr.h>

class MyForm : public Gtk::Window {
public:
    MyForm();
    MyForm(BaseObjectType * cobject, const Glib::RefPtr<Gtk::Builder>& refBuilder);
    MyForm(const MyForm& orig);
    virtual ~MyForm();
protected:
    Glib::RefPtr<Gtk::Builder> m_refBuilder;

};

#endif /* __MYFORM_H__ */
