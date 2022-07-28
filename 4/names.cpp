#include <gtkmm.h>

class Window : public Gtk::Window {
public:
    Gtk::VBox vbox;
    Gtk::Entry firstname_entry;
    Gtk::Entry lastname_entry;
    Gtk::Button button;
    Gtk::Label label;

    Window() {
        Gtk::Window::set_title("Øving 4");
        button.set_label("Sett sammen navn");

        vbox.pack_start(firstname_entry);  //Add the widget entry to vbox
        vbox.pack_start(lastname_entry);  //Add the widget entry to vbox
        vbox.pack_start(button); //Add the widget button to vbox
        vbox.pack_start(label);  //Add the widget label to vbox

        add(vbox);  //Add vbox to window
        show_all(); //Show all widgets

        auto entry_update = [this]() {
            button.set_sensitive(!firstname_entry.get_text().empty() && !lastname_entry.get_text().empty());
        };

        firstname_entry.signal_changed().connect(entry_update);
        lastname_entry.signal_changed().connect(entry_update);

        button.signal_clicked().connect([this]() {
            label.set_text("Kombinert navn: " + firstname_entry.get_text() + " " + lastname_entry.get_text());
        });
    }
};

int main() {
    Gtk::Main gtk_main;
    Window window;
    Gtk::Main::run(window);
}