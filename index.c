#include <gtk/gtk.h>
#include <stdio.h>
#include <stdbool.h>
//import C libraries

//gcc -Wall -Werror -pedantic -std=c11 index.c `pkg-config --cflags --libs gtk+-3.0`
//using GTK+ 3.0

/* Function called when the user clicks the show button. */
void on_show_button_1_clicked(GtkWidget *show_button1, GtkWidget *hello_display)
{
    printf("1 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>1</span>");
}

void on_show_button_2_clicked(GtkWidget *show_button2, GtkWidget *hello_display)
{
    printf("2 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>2</span>");
}
void on_show_button_3_clicked(GtkWidget *show_button3, GtkWidget *hello_display)
{
    printf("3 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>3</span>");
}

void on_show_button_4_clicked(GtkWidget *show_button4, GtkWidget *hello_display)
{
    printf("4 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>4</span>");
}void on_show_button_5_clicked(GtkWidget *show_button5, GtkWidget *hello_display)
{
    printf("5 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>5</span>");
}

void on_show_button_6_clicked(GtkWidget *show_button6, GtkWidget *hello_display)
{
    printf("6 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>6</span>");
}void on_show_button_7_clicked(GtkWidget *show_button7, GtkWidget *hello_display)
{
    printf("7 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>7</span>");
}

void on_show_button_8_clicked(GtkWidget *show_button8, GtkWidget *hello_display)
{
    printf("8 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>8</span>");
}void on_show_button_9_clicked(GtkWidget *show_button9, GtkWidget *hello_display)
{
    printf("9 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>9</span>");
}

void on_show_button_0_clicked(GtkWidget *show_button0, GtkWidget *hello_display)
{
    printf("0 has been clicked\n");
	
	gtk_label_set_markup(GTK_LABEL(hello_display),
			     "<span font='Italic 30'>0</span>");
}
/* Function called when the user clicks the clear button */
void on_clear_button_clicked(GtkWidget *clear_button, GtkWidget *hello_display)
{
	/* Display an empty message (clear the greeting). */
	gtk_label_set_text(GTK_LABEL(hello_display), "");
}

/* Build the application window with all its components */
void build_window(void)
{
	/* Declares the list of variables. Each one will represent one
	 * graphical element (called a widget). */
	GtkWidget *hello_window, *layout;
	GtkWidget *hello_display, *show_button1, *show_button2, *show_button3, *show_button4, *show_button5, *show_button6, *show_button7, *show_button8, *show_button9, *show_button0, *clear_button;

	/* Creates the text box (label) and two buttons. */
	hello_display = gtk_label_new(NULL);

	show_button1 = gtk_button_new();
	show_button2 = gtk_button_new();
    show_button3 = gtk_button_new();
	show_button4 = gtk_button_new();
    show_button5 = gtk_button_new();
	show_button6 = gtk_button_new();
    show_button7 = gtk_button_new();
	show_button8 = gtk_button_new();
    show_button9 = gtk_button_new();
	show_button0 = gtk_button_new();
	gtk_button_set_label(GTK_BUTTON(show_button1), "1");
	gtk_button_set_label(GTK_BUTTON(show_button2), "2");
	gtk_button_set_label(GTK_BUTTON(show_button3), "3");
	gtk_button_set_label(GTK_BUTTON(show_button4), "4");
	gtk_button_set_label(GTK_BUTTON(show_button5), "5");
	gtk_button_set_label(GTK_BUTTON(show_button6), "6");
	gtk_button_set_label(GTK_BUTTON(show_button7), "7");
	gtk_button_set_label(GTK_BUTTON(show_button8), "8");
	gtk_button_set_label(GTK_BUTTON(show_button9), "9");
	gtk_button_set_label(GTK_BUTTON(show_button0), "0");
	
    clear_button = gtk_button_new();
	gtk_button_set_label(GTK_BUTTON(clear_button), "Clear");

	/* Connects the "clicked" input events happening at the buttons to
	 * their callback functions (on_show_button_clicked() and
	 * on_clear_button_clicked()). */
	g_signal_connect(show_button1, "clicked",
			 G_CALLBACK(on_show_button_1_clicked),
			 hello_display);
	g_signal_connect(show_button2, "clicked",
			 G_CALLBACK(on_show_button_2_clicked),
			 hello_display);
    g_signal_connect(show_button3, "clicked",
			 G_CALLBACK(on_show_button_3_clicked),
			 hello_display);
	g_signal_connect(show_button4, "clicked",
			 G_CALLBACK(on_show_button_4_clicked),
			 hello_display);
    g_signal_connect(show_button5, "clicked",
			 G_CALLBACK(on_show_button_5_clicked),
			 hello_display);
	g_signal_connect(show_button6, "clicked",
			 G_CALLBACK(on_show_button_6_clicked),
			 hello_display);
    g_signal_connect(show_button7, "clicked",
			 G_CALLBACK(on_show_button_7_clicked),
			 hello_display);
	g_signal_connect(show_button8, "clicked",
			 G_CALLBACK(on_show_button_8_clicked),
			 hello_display);
    g_signal_connect(show_button9, "clicked",
			 G_CALLBACK(on_show_button_9_clicked),
			 hello_display);
	g_signal_connect(show_button0, "clicked",
			 G_CALLBACK(on_show_button_0_clicked),
			 hello_display);
	g_signal_connect(clear_button, "clicked",
			 G_CALLBACK(on_clear_button_clicked),
			 hello_display);

	/* Create a layout element to visually organize widgets. */
	layout = gtk_grid_new();
	gtk_grid_attach(GTK_GRID(layout), hello_display, 0, 0, 3, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button1, 0, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button2, 1, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button3, 2, 1, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button4, 0, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button5, 1, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button6, 2, 2, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button7, 0, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button8, 1, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button9, 2, 3, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), show_button0, 0, 4, 1, 1);
	gtk_grid_attach(GTK_GRID(layout), clear_button, 1, 4, 2, 1);
	gtk_grid_set_row_homogeneous(GTK_GRID(layout), TRUE);
	gtk_grid_set_column_homogeneous(GTK_GRID(layout), TRUE);
	gtk_grid_set_row_spacing(GTK_GRID(layout), 8);
	gtk_grid_set_column_spacing(GTK_GRID(layout), 32);
	gtk_widget_set_margin_start(layout, 20);
	gtk_widget_set_margin_end(layout, 20);
	gtk_widget_set_margin_top(layout, 20);
	gtk_widget_set_margin_bottom(layout, 20);

	/* Finally, create the main window and insert the whole layout
	 * inside. */
	hello_window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(hello_window), "Graphical Hello");
	gtk_window_set_default_size(GTK_WINDOW(hello_window), 400, 300);
	gtk_container_add(GTK_CONTAINER(hello_window), layout);
	gtk_widget_show_all(hello_window);

	/* Connects the "destroy" event, generated when closing the window
	 * to the gtk_main_quit() function, which asks to stop the event
	 * loop, so that the program can finish. */
	g_signal_connect(hello_window, "destroy", G_CALLBACK(gtk_main_quit),
			 NULL);
}

/* main() function called when program starts. */
int main(int argc, char *argv[]) {
	/* Call the gtk initialization function */
	gtk_init(&argc, &argv);

	/* Call our function to build the complete program window. */
	build_window();

	/* Enter Gtk+ main event loop (sleeps waiting for input events,
	 * like mouse or keyboard input, then wakes up calling the registered
	 * event callbacks and goes back to sleep until exit is requested). */
	gtk_main();

	/* After the main loop quits just return zero to the operating
	 * system. */
	return 0;
}
