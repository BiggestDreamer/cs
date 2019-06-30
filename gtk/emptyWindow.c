#include <gtk/gtk.h>

//this is edited by me
//i am the content other added
int main(int argc, char* argv[]){
	gtk_init(&argc, &argv);
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_show(window);

	gtk_main();
	return 0;
}
