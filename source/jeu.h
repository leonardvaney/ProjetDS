
#define NOMBRE_DE_MINIJEU 0; //le nombre de minijeu total, à définir au fur et à mesure de l'avancée
#define VIE_MAX 3;


typedef struct {
	int score;
	int vie_restante;

	int difficulte; //0, 1, 2 (défini la difficulté du niveau)
	int vitesse; //peut aller vers l'infini (défini le temps donné au joueur

	int minigame_current_total_time; //en dixième de secondes (pour les deux)
	int minigame_current_time;

} game_status;

typedef struct {
	} game_challenge;

