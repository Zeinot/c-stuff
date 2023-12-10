#include <stdio.h>
#include <math.h>
int main()
{
    int type_chambre, etage, nbr_nuits, promo, invalide,i;
    invalide = 0;
    promo = 0;
    double prix_par_nuit, total;

    // printf("Quel etage voulez vous\n");
    printf("-------------------------------------------\n");
    printf("1.Etage 1 - 5 : Signle (450), Double (600), Suite (1300)\n");
    printf("2.Etage 6 - 11 : Signle (550), Double (720), Suite (2150)\n");
    printf("3.Etage 12 : Signle (pas de chambre), Double (1200), Suite (3500)\n");
    printf("-------------------------------------------\n");
    printf("Nombre de nuits superieur a 4 => reduction de 10%%\n");
    printf("-------------------------------------------\n");
    printf("Quel type de chambre voulez vous :\n");
    printf("1.Signle\n");
    printf("2.Double\n");
    printf("3.Suite\n > ");
    scanf("%d", &type_chambre);
    if (type_chambre != 1 && type_chambre != 2 && type_chambre != 3)
    {
        printf("Erreur");
        return 0;
    }
    printf("Quel etage voulez vous\n");
    printf("1.Etage 1 - 5\n");
    printf("2.Etage 6 - 11\n");
    printf("3.Etage 12\n  > ");
    scanf("%d", &etage);
    if (etage != 1 && etage != 2 && etage != 3)
    {
        printf("Erreur");
        return 0;
    }
    printf("Combien de nuits voulez vous\n  > ");
    scanf("%d", &nbr_nuits);
    switch (etage)
    {
    case 1:
        break;

    case 2:
        etage = 6;
        break;
    case 3:
        etage = 12;
        break;

    default:
        invalide = 1;
    }
    if (invalide)
    {
        printf("Erreur");
        return 0;
    }
    switch (type_chambre)
    {
    case 1:
        if (etage >= 1 && etage <= 5)
        {
            prix_par_nuit = 450;
            printf("prix_par_nuit = %.2f\n", prix_par_nuit);
            if (nbr_nuits >= 4)
                promo = 1;
        }

        else if (etage >= 6 && etage <= 11)
        {
            prix_par_nuit = 550;
            printf("prix_par_nuit = %.2f\n", prix_par_nuit);
            if (nbr_nuits >= 4)
                promo = 1;
        }
        else if (etage == 12)
        {
            printf("il n'y a pas de chambre single aux 12eme etage\n");
            invalide = 1;
            return 0;
        }
        else
        {
            printf("Erreur");
            invalide = 1;
            return 0;
        }
        switch (promo)
        {
        case 1:
            total = nbr_nuits * prix_par_nuit * 0.9;
            printf(">>> Vous aurez 10%% de reduction\n");
            break;

        default:
            total = nbr_nuits * prix_par_nuit;
        }
        break;
    case 2:
        if (etage >= 1 && etage <= 5)
        {
            prix_par_nuit = 600;
            printf("prix_par_nuit = %.2f\n", prix_par_nuit);
            if (nbr_nuits >= 4)
                promo = 1;
        }

        else if (etage >= 6 && etage <= 11)
        {
            prix_par_nuit = 720;
            printf("prix_par_nuit = %.2f\n", prix_par_nuit);
            if (nbr_nuits >= 4)
                promo = 1;
        }
        else if (etage == 12)
        {
            prix_par_nuit = 1200;
            printf("prix_par_nuit = %.2f\n", prix_par_nuit);
            if (nbr_nuits >= 4)
                promo = 1;
        }
        else
        {
            printf("Erreur");
            invalide = 1;
            return 0;
        }

        switch (promo)
        {
        case 1:
            total = nbr_nuits * prix_par_nuit * 0.9;
            printf(">>> Vous aurez 10%% de reduction\n");
            break;

        default:
            total = nbr_nuits * prix_par_nuit;
        }
        break;
    case 3:
        if (etage >= 1 && etage <= 5)
        {
            prix_par_nuit = 1300;
            if (nbr_nuits >= 4)
                promo = 1;
        }

        else if (etage >= 6 && etage <= 11)
        {
            prix_par_nuit = 2150;
            if (nbr_nuits >= 4)
                promo = 1;
        }
        else if (etage == 12)
        {
            prix_par_nuit = 3500;
            printf("prix_par_nuit = %.2f\n", prix_par_nuit);
            if (nbr_nuits >= 4)
                promo = 1;
        }
        else
        {
            printf("Erreur");
            invalide = 1;
            return 0;
        }
        switch (promo)
        {
        case 1:
            total = nbr_nuits * prix_par_nuit * 0.9;
            printf(">>> Vous aurez 10%% de reduction\n");
            break;

        default:
            total = nbr_nuits * prix_par_nuit;
        }

        break;

    default:
        printf("Erreur");
        return 0;
    }
    printf(" ============================ \n >>> Votre total = %.2f\n", total);
    printf("tapez un nombre aleatoire pour recommancer\n > ");
    scanf("%d",&i);
    main();
}