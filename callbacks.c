#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
GtkWidget *IMC;
GtkWidget *prfil;
GtkWidget *gymadvisor;
GtkWidget *avisrec;
GtkWidget *fichemed;
GtkWidget *modifprofil;
GtkWidget *dispo;
GtkWidget *espadhrnt;
GtkWidget *succesadherent;
void
on_button1_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{

prfil=create_prfil();
gtk_widget_show(prfil);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espadhrnt")));


}


void
on_button2_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *gymadvisor;
gymadvisor=create_gymadvisor();
gtk_widget_show(gymadvisor);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espadhrnt")));

}


void
on_button3_clicked                     (GtkWidget       *button,          gpointer         user_data)

{
GtkWidget *avisrec;
avisrec=create_avisrec();
gtk_widget_show(avisrec);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espadhrnt")));
}


void
on_button4_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *fichemed;
fichemed=create_fichemed();
gtk_widget_show(fichemed);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espadhrnt")));
}


void
on_exit_clicked                        (GtkWidget      *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_modif_clicked                       (GtkWidget      *button,
                                        gpointer         user_data)
{
GtkWidget *modifprofil;
modifprofil=create_modifprofil();
gtk_widget_show(modifprofil);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"prfil")));

}


void
on_dispo_clicked                       (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *dispo;
dispo=create_dispo();
gtk_widget_show(dispo);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"prfil")));
}


void
on_return_clicked                      (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *modifprofil;
GtkWidget *prfil;
prfil=create_prfil();
gtk_widget_show(prfil);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"modifprofil")));

}


void
on_save_clicked                        (GtkWidget       *button,
                                        gpointer         user_data)
{
int i;
int nbadherent=2;
char chemin[]="listeadherent.txt";
GtkWidget *inputtitre;
GtkWidget *inputnom;
GtkWidget *inputprenom;
GtkWidget *inputpays;
GtkWidget *inputnum;
GtkWidget *inputadress;
GtkWidget *inputmail;
GtkWidget *inputjour;
GtkWidget *inputmois;
GtkWidget *inputannee;
char titre[20];
char nom[20];
char prenom[20];
char pays[20];
char num[20];
char adress[200];
char mail[50];
char jour[3];
char mois[3];
char annee[5];
inputtitre=lookup_widget(button,"comboboxentry1");
inputnom=lookup_widget(button,"entry1");
inputprenom=lookup_widget(button,"entry2");
inputpays=lookup_widget(button,"comboboxentry2");
inputnum=lookup_widget(button,"entry3");
inputadress=lookup_widget(button,"textview1");
inputmail=lookup_widget(button,"entry4");
inputjour=lookup_widget(button,"comboboxentry3");
inputmois=lookup_widget(button,"comboboxentry4");
inputannee=lookup_widget(button,"comboboxentry5");
strcpy(titre,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputtitre)));
strcpy(nom,gtk_entry_get_text(GTK_ENTRY(inputnom)));
strcpy(prenom,gtk_entry_get_text(GTK_ENTRY(inputprenom)));
strcpy(pays,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputpays)));
strcpy(num,gtk_entry_get_text(GTK_ENTRY(inputnum)));
strcpy(adress,gtk_entry_get_text(GTK_ENTRY(inputadress)));
strcpy(mail,gtk_entry_get_text(GTK_ENTRY(inputmail)));
strcpy(jour,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputjour)));
strcpy(mois,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputmois)));
strcpy(annee,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputannee)));
FILE*f;
f=fopen(chemin,"w");
fprintf(f,"%s %s %s %s %s %s %s %s %s \n",nom,prenom,pays,num,adress,mail,jour,mois,annee);
fclose(f);
succesadherent=create_succesadherent();
gtk_widget_show(succesadherent);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"modifprfil")));

}

void
on_retrnesp3_clicked                 (GtkWidget       *button,
                                        gpointer         user_data)
{
espadhrnt=create_espadhrnt();
gtk_widget_show(espadhrnt);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"fichemed")));
}

void
on_retrnprfil1_clicked                 (GtkWidget       *button,
                                        gpointer         user_data)
{
espadhrnt=create_espadhrnt();
gtk_widget_show(espadhrnt);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"prfil")));
}


void
on_retrnesp1_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
espadhrnt=create_espadhrnt();
gtk_widget_show(espadhrnt);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"gymadvisor")));
}


void
on_retrnesp2_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
espadhrnt=create_espadhrnt();
gtk_widget_show(espadhrnt);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"avisrec")));
}


void
on_retrnprfil2_clicked                 (GtkWidget       *button,
                                        gpointer         user_data)
{
prfil=create_prfil();
gtk_widget_show(prfil);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"dispo")));
}



void
on_continue1_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
prfil=create_prfil();
gtk_widget_show(prfil);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"succesadherent")));
}


void
on_button6_clicked                     (GtkWidget        *button,
                                        gpointer         user_data)
{

}


void
on_button5_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *button5;
button5=create_IMC();
gtk_widget_show(IMC);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"gymadvisor")));

}


void
on_button7_enter                       (GtkWidget        *button,
                                        gpointer         user_data)
{

}


void
on_button8_clicked                     (GtkWidget        *button,
                                        gpointer         user_data)
{

}


void
on_button10_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{

}

