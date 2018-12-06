#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_modifadh_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_suppradh_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_retrnC1_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ajoutadh_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_Enregistrer_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_validermodifadh_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_oksuppradh_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_Connection_clicked                  (GtkButton       *button,
                                        gpointer         user_data)

{
GtkWidget *inputlogin;
GtkWidget *inputpasswd;
GtkWidget *outputerreur;
char log[20];
char pass[20];
char n[20],p[20],i[20],pwd[20],erreur[100];
int role=0;
GtkWidget *connection=lookup_widget(button,"connection");
inputlogin=lookup_widget(button,"entrylogin");
inputpasswd=lookup_widget(button,"entrypasswd");
strcpy(log,gtk_entry_get_text(GTK_ENTRY(entrylogin)));
strcpy(pass,gtk_entry_get_text_(GTK_ENTRY(entrypasswd)));
FILE*f;
f=fopen("users.txt","r");
while((fscanf(f,"%s %s %s %s %s %s %d\n",n,p,i,pwd,&role)!=EOF)&&(j!=1))
if(strcmp(log,i)==0 && strcmp(pass,pwd)==0)
j=role;
switch(j){
case 0:
strcpy(erreur,"veuillez vérifier votre identifiant ou mot de passe");
gtk_label_set_text(GTK_LABEL(outputerreur),erreur);
break;
case 1:
EspaceAdmin = create_EspaceAdmin();
gtk_widget_hide(connection);
gtk_widget_show(EspaceAdmin);
break;
case 2:
EspaceAdherent = create_EspaceAdherent();
gtk_widget_hide(connection);
gtk_widget_show(EspaceAdherent);
case 3:
EspaceCoach=create_EspaceCoach();
gtk_widget_hide(connection);
gtk_widget_show(EspaceCoach);
case 4:
EspaceKine=create_EspaceKine();
gtk_widget_hide(connection);
gtk_widget_show(EspaceKine);
case 5:
EspaceMed=create_EspaceMed();
gtk_widget_hide(connection);
gtk_widget_show(EspaceMed();
case 6:
EspaceDiet=create_EspaceDiet();
gtk_widget_hide(connection);
gtk_widget_show(EspaceDiet);
case 7:
EspaceAgent=create_EspaceAgent();
gtk_widget_hide(connection);
gtk_widget_show(EspaceAgent);
}



void
on_Gcompte_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{

}

