#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <string.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "ajout.h"

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
char titre[20],nom[20],prenom[20],pays[20],num[20];
char adress[20],mail[20],jour[20],mois[20],annee[20];
char chemin[]="listeadherent.txt";
prfil=create_prfil();
gtk_widget_show(prfil);
gtk_widget_hide(GTK_WIDGET(lookup_widget(button,"espadhrnt")));
int i=1;
FILE*f;
f=fopen(chemin,"a+");
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s\n",titre,nom,prenom,pays,num,adress,mail,jour,mois,annee)!=EOF)
{
i++;
}
GtkWidget *labeltitle;
GtkWidget *labelname;
GtkWidget *labellastname;
GtkWidget *labelpays;
GtkWidget *labelphonmbr;
GtkWidget *labeladress;
GtkWidget *labelmailadress;
GtkWidget *labeljour;
GtkWidget *labelmois;
GtkWidget *labelannee;
labeltitle=lookup_widget(prfil,"title");
labelname=lookup_widget(prfil,"name");
labellastname=lookup_widget(prfil,"lastname");
labelpays=lookup_widget(prfil,"pays");
labelphonmbr=lookup_widget(prfil,"phonmbr");
labeladress=lookup_widget(prfil,"adress");
labelmailadress=lookup_widget(prfil,"mailadress");
labeljour=lookup_widget(prfil,"jour");
labelmois=lookup_widget(prfil,"mois");
labelannee=lookup_widget(prfil,"annee");
gtk_label_set_text(GTK_LABEL(labeltitle),titre);
gtk_label_set_text(GTK_LABEL(labelname),nom);
gtk_label_set_text(GTK_LABEL(labellastname),prenom);
gtk_label_set_text(GTK_LABEL(labelpays),pays);
gtk_label_set_text(GTK_LABEL(labelphonmbr),num);
gtk_label_set_text(GTK_LABEL(labeladress),adress);
gtk_label_set_text(GTK_LABEL(labelmailadress),mail);
gtk_label_set_text(GTK_LABEL(labeljour),jour);
gtk_label_set_text(GTK_LABEL(labelmois),mois);
gtk_label_set_text(GTK_LABEL(labelannee),annee);


fclose(f);

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
adherent A;
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

inputtitre=lookup_widget(button,"comboboxentry1");
inputnom=lookup_widget(button,"entry1");
inputprenom=lookup_widget(button,"entry2");
inputpays=lookup_widget(button,"comboboxentry2");
inputnum=lookup_widget(button,"entry3");
inputadress=lookup_widget(button,"entryadress");
inputmail=lookup_widget(button,"entry4");
inputjour=lookup_widget(button,"comboboxentry3");
inputmois=lookup_widget(button,"comboboxentry4");
inputannee=lookup_widget(button,"comboboxentry5");
strcpy(A.titre,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputtitre)));
strcpy(A.nom,gtk_entry_get_text(GTK_ENTRY(inputnom)));
strcpy(A.prenom,gtk_entry_get_text(GTK_ENTRY(inputprenom)));
strcpy(A.pays,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputpays)));
strcpy(A.num,gtk_entry_get_text(GTK_ENTRY(inputnum)));
strcpy(A.adress,gtk_entry_get_text(GTK_ENTRY(inputadress)));
strcpy(A.mail,gtk_entry_get_text(GTK_ENTRY(inputmail)));
strcpy(A.jour,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputjour)));
strcpy(A.mois,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputmois)));
strcpy(A.annee,gtk_combo_box_get_active_text(GTK_COMBO_BOX(inputannee)));
nbadherent=ajouter_adherent(A,nbadherent);
FILE*f;
f=fopen(chemin,"a+");
for (i=0;i<nbadherent;i++)
{
fprintf(f,"%s %s %s %s %s %s %s %s %s %s \n",tabadherent[i].titre,tabadherent[i].nom,tabadherent[i].prenom,tabadherent[i].pays,tabadherent[i].num,tabadherent[i].adress,tabadherent[i].mail,tabadherent[i].jour,tabadherent[i].mois,tabadherent[i].annee);
}
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

